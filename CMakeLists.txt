cmake_minimum_required(VERSION 3.1)

project (text_histogram "CXX")

message("${PROJECT_NAME}: run")

add_executable(${PROJECT_NAME} ../include/text_histogram.cpp ../include/init.cpp ../include/calc.cpp)
