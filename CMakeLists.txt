cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(cpp_practice)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Weverything -Wno-c++98-c++11-compat -Wno-c++98-compat -Wno-sign-conversion -Wno-global-constructors")

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Wformat=2 -Wshadow -Wdouble-promotion -Wold-style-cast -Wnull-dereference")

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wjump-misses-init -Wuseless-cast -Wrestrict -Wlogical-op -Wduplicated-branches -Wduplicated-cond");


find_package(GTest REQUIRED)
include(CTest)
enable_testing()
add_subdirectory(fibonacci)
add_subdirectory(bit_counter)
add_subdirectory(cracking_the_coding_interview)



find_program(
  CLANG_TIDY_EXE
  NAMES "clang-tidy"
  DOC "Path to clang-tidy executable"
  )
if(NOT CLANG_TIDY_EXE)
  message(STATUS "clang-tidy not found.")
else()
  message(STATUS "clang-tidy found: ${CLANG_TIDY_EXE}")
  set(DO_CLANG_TIDY "${CLANG_TIDY_EXE}" "-checks=*,-clang-analyzer-alpha.*")
endif()



