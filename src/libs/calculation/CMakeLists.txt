cmake_minimum_required(VERSION 3.5)

project(calculation LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(dir_build ${CMAKE_CURRENT_SOURCE_DIR}/../../../build)
set(LIBRARY_OUTPUT_PATH ${dir_build}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir_build}/runtime)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_library(calculation SHARED
  calculation_global.h
  calculation.cpp
  calculation.h
)

target_link_libraries(calculation PRIVATE Qt5::Core)

target_compile_definitions(calculation PRIVATE CALCULATION_LIBRARY)
