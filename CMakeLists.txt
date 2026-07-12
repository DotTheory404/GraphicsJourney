cmake_minimum_required(VERSION 3.10)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(/Zc:__cplusplus)


add_executable(LearnCpp 
    day1.cpp 
    day2.cpp
    day3.cpp
    square.cpp
    day4.cpp
    day5DataType.cpp
    task4Chap.cpp
    day6.cpp
    chap5Task.cpp
    day7.cpp
    day8BitWiseOpp.cpp
)