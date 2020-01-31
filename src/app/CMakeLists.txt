cmake_minimum_required(VERSION 3.5)

project(test-cmake LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

set(dir_build ${CMAKE_CURRENT_SOURCE_DIR}/../../build)
set(EXECUTABLE_OUTPUT_PATH ${dir_build}/bin)
#set(LIBRARY_OUTPUT_PATH ${dir_build}/bin)

find_library(LIB_CALCULATION calculation ${dir_build}/bin)

find_package(Qt5Core)

add_executable(test-cmake
  main.cpp
)

include_directories("../libs/calculation")

target_link_libraries(test-cmake Qt5::Core)
target_link_libraries(test-cmake ${LIB_CALCULATION})

