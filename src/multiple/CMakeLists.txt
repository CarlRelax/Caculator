cmake_minimum_required(VERSION 3.22)
project(multiple)
# CMAKE_INCLUDE_PATH(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../lib)
add_library(multiple SHARED ${SRC})
