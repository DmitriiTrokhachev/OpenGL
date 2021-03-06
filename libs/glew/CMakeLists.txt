if ( NOT DEFINED CMAKE_BUILD_TYPE )
  set( CMAKE_BUILD_TYPE Release CACHE STRING "Build type" )
endif ()

project (libglew)

cmake_minimum_required (VERSION 2.4)

if (COMMAND cmake_policy)
  cmake_policy (SET CMP0003 NEW)
endif()

set(CMAKE_DEBUG_POSTFIX d)

option (BUILD_UTILS "utilities" ON)

set (GLEW_DIR .)

# get version from config/version
file (STRINGS ${GLEW_DIR}/config/version  _VERSION_MAJOR_STRING REGEX "GLEW_MAJOR[ ]*=[ ]*[0-9]+.*")
string (REGEX REPLACE "GLEW_MAJOR[ ]*=[ ]*([0-9]+)" "\\1" CPACK_PACKAGE_VERSION_MAJOR ${_VERSION_MAJOR_STRING})
file (STRINGS ${GLEW_DIR}/config/version  _VERSION_MINOR_STRING REGEX "GLEW_MINOR[ ]*=[ ]*[0-9]+.*")
string (REGEX REPLACE "GLEW_MINOR[ ]*=[ ]*([0-9]+)" "\\1" CPACK_PACKAGE_VERSION_MINOR ${_VERSION_MINOR_STRING})
file (STRINGS ${GLEW_DIR}/config/version  _VERSION_PATCH_STRING REGEX "GLEW_MICRO[ ]*=[ ]*[0-9]+.*")
string (REGEX REPLACE "GLEW_MICRO[ ]*=[ ]*([0-9]+)" "\\1" CPACK_PACKAGE_VERSION_PATCH ${_VERSION_PATCH_STRING})
set (GLEW_VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (WIN32)
  set (GLEW_LIB_NAME libglew)
else ()
  set (GLEW_LIB_NAME glew)
  set (DLL_PREFIX lib)
endif ()

find_package (OpenGL REQUIRED)
set (GLEW_LIBRARIES ${OPENGL_LIBRARIES})

add_definitions (-DGLEW_NO_GLU)

include_directories (${GLEW_DIR}/include)

add_library (libglew STATIC ${GLEW_DIR}/src/glew.c)
set_target_properties (libglew PROPERTIES COMPILE_DEFINITIONS "GLEW_BUILD" OUTPUT_NAME "${GLEW_LIB_NAME}" PREFIX "${DLL_PREFIX}")
target_link_libraries (libglew ${GLEW_LIBRARIES})
