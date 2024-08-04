cmake_minimum_required(VERSION 3.27.0)

set (CMAKE_C_STANDARD 23)
set (CMAKE_C_STANDARD_REQUIRED TRUE)

option(CMAKE_COMPILE_WARNING_AS_ERROR TRUE)

project("Multiple Dimensions Kadane Algorithm" C)

add_subdirectory(code)