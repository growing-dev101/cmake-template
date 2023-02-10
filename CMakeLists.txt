cmake_minimum_required(VERSION 3.25)

project(my_test_project LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Debug) 

file(GLOB SRC
    "src/*.cpp" "src/*.c")

add_executable(my_test_project ${SRC})

target_include_directories(my_test_project PUBLIC ${CMAKE_SOURCE_DIR}/inc)

