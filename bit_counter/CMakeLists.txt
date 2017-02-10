cmake_minimum_required(VERSION 2.8.8)

set(PROJECT_NAME_STR bit_counter)

project(PROJECT_NAME_STR)
enable_language(CXX)

find_package(Threads REQUIRED)

if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS         "-Wall -Wno-unknown-pragmas -Wno-sign-compare -Woverloaded-virtual -Wwrite-strings -Wno-unused")
    set(CMAKE_CXX_FLAGS_DEBUG   "-O0 -g3")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

#-------------------
# set common include folder for module
#-------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

#-------------------
# Module source
#-------------------
set(PROJECT_LIB_NAME ${PROJECT_NAME_STR}_impl)
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_library(${PROJECT_LIB_NAME} ${SRC_FILES})

#-------------------
# Test
#-------------------
set(PROJECT_TEST_NAME test_${PROJECT_NAME_STR})
include_directories(${GTEST_INCLUDE_DIRS} ${COMMON_INCLUDES})

file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)

add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})
target_link_libraries(${PROJECT_TEST_NAME} ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} ${PROJECT_LIB_NAME})

add_test(unit ${PROJECT_TEST_NAME})
