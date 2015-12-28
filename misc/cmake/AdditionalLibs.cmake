set(ADDITIONAL_LIBS "")

# boost
find_package(Boost
    COMPONENTS
        program_options
        thread
        system
        filesystem
        unit_test_framework
    REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIRS})
#add_definitions(${Boost_OTHERS})
list(APPEND ADDITIONAL_LIBS ${Boost_LIBRARIES})

# netlib
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${POJECT_SOURCE_DIR}/3party/cpp-netlib)
find_package(cppnetlib REQUIRED)
include_directories(${cppnetlib_INCLUDE_DIRS})
LIST(APPEND ADDITIONAL_LIBS ${cppnetlib_LIBRARIES})

find_package(OpenSSL)
include_directories(${OpenSSL_INCLUDE_DIRS})
LIST(APPEND ADDITIONAL_LIBS ${OpenSSL_LIBRARIES})

#find_package(PkgConfig REQUIRED)
#pkg_check_modules(PKGCONFIGLIBS REQUIRED openssl libcrypto)
#include_directories(${PKGCONFIGLIBS_INCLUDE_DIR})
#link_directories(${PKGCONFIGLIBS_LIBRARY_DIRS})
#add_definitions(${PKGCONFIGLIBS_OTHERS})
#list(APPEND ADDITIONAL_LIBS ${PKGCONFIGLIBS_LIBRARIES})

message("ADDITIONAL_LIBS = ${ADDITIONAL_LIBS}")
