cmake_minimum_required(VERSION 3.17)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

project(test)

find_package(GTest REQUIRED)

add_executable(
  test
  find_largest_sum.cpp
  test.cpp
)

target_link_libraries(test GTest::Main)