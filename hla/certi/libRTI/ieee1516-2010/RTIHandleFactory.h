// ----------------------------------------------------------------------------
// CERTI - HLA RunTime Infrastructure
// Copyright (C) 2002-2014  ONERA
//
// This file is part of CERTI-libRTI
//
// CERTI-libRTI is free software ; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation ; either version 2 of
// the License, or (at your option) any later version.
//
// CERTI-libRTI is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY ; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program ; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//
// ----------------------------------------------------------------------------
#ifndef RTIHandleFactory_h
#define RTIHandleFactory_h

#include <set>
#include <map>
#include <vector>
#include <list>
#include "certi.hh"
#include "GAV.hh"
#include <RTI/Typedefs.h>
#include "HandleImplementation.h"
#include "M_Classes.hh"


template<class I>
struct certi_cast
{
    template<class R>
    const I& operator()(const R& imp)
    {
        try {
            return dynamic_cast<const I&>(imp);
        }
        catch (...)
        {
            throw rti1516e::RTIinternalError(L"Incompatible object on input.");
        }
    }

    template<class R>
    I& operator()(R& imp)
    {
        try {
            return dynamic_cast<I&>(imp);
        }
        catch (...)
        {
            throw rti1516e::RTIinternalError(L"Incompatible object on input.");
        }
    }
};

#define DEFINE_HANDLE_FRIEND_CLASS(HandleKind)                  \
																\
/* Forward declaration for the RTI-internal class            */ \
/* used to implement a specific kind of handle               */ \
class HandleKind;											    \
class HandleKind##Implementation;                               \
																\
/* Each handle class generated by this macro provides the    */ \
/* following interface                                       */ \
class RTI_EXPORT HandleKind##Friend                                        \
{                                                               \
public:                                                         \
   static HandleKind createRTI1516Handle(const certi::Handle & certiHandle);                   \
   static HandleKind createRTI1516Handle(const rti1516e::VariableLengthData & encodedValue);    \
   static certi::Handle toCertiHandle(const HandleKind & rti1516Handle);				       \
																\
private:                                                        \
   HandleKind##Friend();                                        \
   ~HandleKind##Friend();                                       \
																\
};                                                              \

namespace rti1516e
{

	// All of the RTI API's HandleFriend classes are defined 
	// by invoking the macro above.
	DEFINE_HANDLE_FRIEND_CLASS(FederateHandle)
	DEFINE_HANDLE_FRIEND_CLASS(ObjectClassHandle)
	DEFINE_HANDLE_FRIEND_CLASS(InteractionClassHandle)
	DEFINE_HANDLE_FRIEND_CLASS(ObjectInstanceHandle)
	DEFINE_HANDLE_FRIEND_CLASS(AttributeHandle)
	DEFINE_HANDLE_FRIEND_CLASS(ParameterHandle)
	DEFINE_HANDLE_FRIEND_CLASS(DimensionHandle)
	//DEFINE_HANDLE_FRIEND_CLASS(MessageRetractionHandle)
	DEFINE_HANDLE_FRIEND_CLASS(RegionHandle)
	  
	class MessageRetractionHandleFriend {
	public: 
	   static MessageRetractionHandle createRTI1516Handle(const certi::Handle & certiHandle, uint64_t serialNr);   
	   static MessageRetractionHandle createRTI1516Handle(const rti1516e::VariableLengthData & encodedValue);
	   static certi::EventRetraction createEventRetraction(const rti1516e::MessageRetractionHandle & messageRetractionHandle);
	private:                                                        															
	   MessageRetractionHandleFriend();                                        
	   ~MessageRetractionHandleFriend();                                       
	};	

}

#endif // RTI_RTI1516HandleFactory_h
