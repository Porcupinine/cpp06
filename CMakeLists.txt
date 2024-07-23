cmake_minimum_required(VERSION 3.26)
project(cpp06)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp06 main.cpp
        ex00/scalarConverter.cpp
        ex00/scalarConverter.h)
