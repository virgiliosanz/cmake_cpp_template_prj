## Configuration
##########################################################################################
cmake_minimum_required (VERSION 3.2)

project(theprojectname VERSION 0.1.0 LANGUAGES CXX)
set(PROJECT_NAME "theprojectname")
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")


##########################################################################################
## Script starts

if (NOT CMAKE_BUILD_TYPE MATCHES release)
    set(CMAKE_BUILD_TYPE debug)
endif()
message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/misc/cmake/")
set(CMAKE_VERBOSE_MAKEFILE 0) # Use 1 for debugging cmake build procces

# Source dirs
include_directories("src/include")
include_directories(${PROJECT_BINARY_DIR})
configure_file(
    "${PROJECT_SOURCE_DIR}/src/include/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

# Libraries
include(AdditionalLibs)

# Testing
include(CTestTargets)

# build CPack driven installer
include(CPackTargets)

# Documentation (Doxygen)
include(DoxygenTargets)

# Source Dir
add_subdirectory(src)

