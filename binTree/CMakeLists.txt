cmake_minimum_required(VERSION 2.8)

set(PROJECT tree)
project(${PROJECT})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall")

set(SOURCE
  test.cpp)

add_executable(${PROJECT} ${SOURCE})
