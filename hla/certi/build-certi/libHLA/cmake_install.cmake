# Install script for directory: /home/red-sea/COSSIM/hla/certi/libHLA

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/red-sea/COSSIM/hla/certi-tools")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libhla" TYPE FILE FILES
    "/home/red-sea/COSSIM/hla/certi/libHLA/libhla.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAtypesIEEE1516.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAbuffer.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAbasicType.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAenumeratedType.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAfixedArray.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAvariableArray.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAfixedRecord.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/HLAvariantRecord.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/sha1.h"
    "/home/red-sea/COSSIM/hla/certi/libHLA/MurmurHash2.h"
    "/home/red-sea/COSSIM/hla/certi/libHLA/MurmurHash3.h"
    "/home/red-sea/COSSIM/hla/certi/libHLA/PMurHash.h"
    "/home/red-sea/COSSIM/hla/certi/libHLA/tlsf.h"
    "/home/red-sea/COSSIM/hla/certi/libHLA/MessageBuffer.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/MsgBuffer.h"
    "/home/red-sea/COSSIM/hla/certi/libHLA/Clock.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/PosixClock.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/GettimeofdayClock.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/SHM.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/Semaphore.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/SHMPosix.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/SHMSysV.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/SemaphorePosix.hh"
    "/home/red-sea/COSSIM/hla/certi/libHLA/SemaphoreSysV.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/red-sea/COSSIM/hla/certi/libHLA/hlaomtdif2cpp.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/red-sea/COSSIM/hla/certi/build-certi/libHLA/libHLAd.so.4.0.0"
    "/home/red-sea/COSSIM/hla/certi/build-certi/libHLA/libHLAd.so.4"
    "/home/red-sea/COSSIM/hla/certi/build-certi/libHLA/libHLAd.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

