cmake_minimum_required(VERSION 3.21)
project(cpp_d06)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_d06_00
        ex00/Convert.cpp
        ex00/main.cpp

        ex00/Convert.hpp
        )

add_executable(cpp_d06_00_tests
        ex00/Convert.cpp
        ex00/tests.cpp

        ex00/Convert.hpp
        )


add_executable(cpp_d06_01
        ex01/main.cpp
        )

