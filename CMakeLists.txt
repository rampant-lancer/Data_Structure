cmake_minimum_required(VERSION 3.8)
project(Data_Structure)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Node.cpp Node.hpp List.cpp List.hpp Messages.hpp)
add_executable(Data_Structure ${SOURCE_FILES})