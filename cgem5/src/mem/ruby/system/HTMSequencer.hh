/*
 * Copyright (c) 2020 ARM Limited
 * All rights reserved
 *
 * The license below extends only to copyright in the software and shall
 * not be construed as granting a license to any other intellectual
 * property including but not limited to intellectual property relating
 * to a hardware implementation of the functionality of the software
 * licensed hereunder.  You may use the software subject to the license
 * terms below provided that you ensure that this notice is replicated
 * unmodified and in its entirety in all distributions of the software,
 * modified or unmodified, in source code or in binary form.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __MEM_RUBY_SYSTEM_HTMSEQUENCER_HH__
#define __MEM_RUBY_SYSTEM_HTMSEQUENCER_HH__

#include <cassert>
#include <iostream>

#include "mem/htm.hh"
#include "mem/ruby/protocol/HtmCallbackMode.hh"
#include "mem/ruby/protocol/HtmFailedInCacheReason.hh"
#include "mem/ruby/system/RubyPort.hh"
#include "mem/ruby/system/Sequencer.hh"
#include "params/RubyHTMSequencer.hh"

class HTMSequencer : public Sequencer
{
  public:
    HTMSequencer(const RubyHTMSequencerParams &p);
    ~HTMSequencer();

    // callback to acknowledge HTM requests and
    // notify cpu core when htm transaction fails in cache
    void htmCallback(Addr,
                     const HtmCallbackMode,
                     const HtmFailedInCacheReason);

    bool empty() const override;
    void print(std::ostream& out) const override;
    void regStats() override;
    void wakeup() override;

  private:
    /**
     * Htm return code conversion
     *
     * This helper is a hack meant to convert the autogenerated ruby
     * enum (HtmFailedInCacheReason) to the manually defined one
     * (HtmCacheFailure). This is needed since the cpu code would
     * otherwise have to include the ruby generated headers in order
     * to handle the htm return code.
    */
    HtmCacheFailure htmRetCodeConversion(const HtmFailedInCacheReason rc);

    void rubyHtmCallback(PacketPtr pkt, const HtmFailedInCacheReason fail_r);

    RequestStatus insertRequest(PacketPtr pkt,
                                RubyRequestType primary_type,
                                RubyRequestType secondary_type) override;

    // Private copy constructor and assignment operator
    HTMSequencer(const HTMSequencer& obj);
    HTMSequencer& operator=(const HTMSequencer& obj);

    // table/queue for hardware transactional memory commands
    // these do not have an address so a deque/queue is used instead.
    std::deque<SequencerRequest*> m_htmCmdRequestTable;

    Tick m_htmstart_tick;
    Counter m_htmstart_instruction;

    //! Histogram of cycle latencies of HTM transactions
    Stats::Histogram m_htm_transaction_cycles;
    //! Histogram of instruction lengths of HTM transactions
    Stats::Histogram m_htm_transaction_instructions;
    //! Causes for HTM transaction aborts
    Stats::Vector m_htm_transaction_abort_cause;
};

inline std::ostream&
operator<<(std::ostream& out, const HTMSequencer& obj)
{
    obj.print(out);
    out << std::flush;
    return out;
}

#endif // __MEM_RUBY_SYSTEM_HTMSEQUENCER_HH__
