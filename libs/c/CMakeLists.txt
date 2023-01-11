cmake_minimum_required(VERSION 3.0)

project(hello)

include_directories(include)

file(GLOB SRC *.c )

add_executable(${PROJECT_NAME} ${SRC}) 
