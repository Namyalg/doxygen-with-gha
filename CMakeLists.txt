cmake_minimum_required(VERSION 3.18.4)
project(sample)
message("Before adding executable")
#[[When there is a main and an executable has to be created use this : add_executable(add main.cpp add.cpp)]]
# add_executable(add main.cpp add.cpp)
#[[When there is no main file as such and a library needs to be created use this :add_library(add STATIC add.cpp)]]

#[[add_library(add STATIC add.cpp)]]

#[[goal is to build the documentation here, 
    i.e when there is a code change instead of 
    running doxygen every single time, it will be run here
    but needs some basic configuration to be done
]]

option(BUILD_DOC "Build documentation" ON)

#[[look for the package needed to do this job here for us]]
#[[find_package(Doxygen)]]
find_package(Doxygen OPTIONAL_COMPONENTS dot)
if(DOXYGEN_FOUND)
#[[used to write on stdout]]
  message("Doxygen has been found")
  #[[The source directory is the one ]]
  message(${CMAKE_CURRENT_SOURCE_DIR})
  message(${CMAKE_CURRENT_BINARY_DIR})
  set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/docs/Doxyfile)
  set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

  # request to configure the file
  configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
  message("Doxygen build started")

  message("Path to executable is" ${DOXYGEN_EXECUTABLE})

  # note the option ALL which allows to build the docs together with the application
  add_custom_target( doc_doxygen ALL
      COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
      COMMENT "Generating API documentation with Doxygen"
      VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")

endif (DOXYGEN_FOUND)