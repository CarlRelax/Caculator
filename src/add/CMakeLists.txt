cmake_minimum_required(VERSION 3.22)
project(add)
# CMAKE_INCLUDE_PATH(${CMAKE_CURRENT_SOURCE_DIR}/include)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/ ADD_SRC)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../lib/)
add_library(add SHARED ${ADD_SRC})
