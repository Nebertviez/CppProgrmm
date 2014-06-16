cmake_minimum_required(VERSION 2.8)

set(PROJECT stack)
project(${PROJECT})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(SOURCE
    main.cpp)

add_executable(${PROJECT} ${SOURCE})
