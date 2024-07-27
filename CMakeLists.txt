cmake_minimum_required(VERSION 3.26)
project(cpp06)

set(CMAKE_CXX_STANDARD 17)

add_executable(ex00
        ex00/scalarConverter.cpp
        ex00/scalarConverter.h
        ex00/main.cpp
		ex01/Serializer.cpp
		ex01/Serializer.h
		ex01/Data.cpp
		ex01/Data.h)
