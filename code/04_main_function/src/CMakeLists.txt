cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_COMPILER "clang++" CACHE STRING "C++ compiler" FORCE)
set(CMAKE_CXX_FLAGS "-stdlib=libc++")
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_STANDARD 23)

project(Main)
add_executable(maindemo main-demo.cc)
