cmake_minimum_required(VERSION 2.8)

set(PROJECT studen)
project(${PROJECT})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall")

set(SOURCE
  student.cpp
  test.cpp)

add_executable(${PROJECT} ${SOURCE})
