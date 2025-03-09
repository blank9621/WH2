CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(calender)
include_directories(include)
add_executable(add ./src/main.cpp ./src/event.cpp ./src/calender.cpp)