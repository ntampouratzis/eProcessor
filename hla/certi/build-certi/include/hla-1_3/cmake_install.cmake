# Install script for directory: /home/red-sea/COSSIM/hla/certi/include/hla-1_3

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/hla13" TYPE FILE FILES
    "/home/red-sea/COSSIM/hla/certi/include/hla-1_3/NullFederateAmbassador.hh"
    "/home/red-sea/COSSIM/hla/certi/include/hla-1_3/RTI.hh"
    "/home/red-sea/COSSIM/hla/certi/include/hla-1_3/RTIambServices.hh"
    "/home/red-sea/COSSIM/hla/certi/build-certi/include/hla-1_3/RTItypes.hh"
    "/home/red-sea/COSSIM/hla/certi/include/hla-1_3/baseTypes.hh"
    "/home/red-sea/COSSIM/hla/certi/include/hla-1_3/federateAmbServices.hh"
    "/home/red-sea/COSSIM/hla/certi/include/hla-1_3/fedtime.hh"
    )
endif()

