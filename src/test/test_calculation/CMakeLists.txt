cmake_minimum_required(VERSION 3.5)

project(test_sum_of_elements LANGUAGES CXX)

find_package(Qt5Test REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(dir_build ${CMAKE_CURRENT_SOURCE_DIR}/../../../build)
set(EXECUTABLE_OUTPUT_PATH ${dir_build}/bin)

find_library(LIB_CALCULATION calculation ${dir_build}/bin)

include_directories("../../libs/calculation")

enable_testing()

add_executable(test_sum_of_elements tst_test_sum_of_elements.cpp)
add_test(NAME test_sum_of_elements COMMAND test_sum_of_elements)

target_link_libraries(test_sum_of_elements PRIVATE Qt5::Test)
target_link_libraries(test_sum_of_elements PRIVATE ${LIB_CALCULATION})

