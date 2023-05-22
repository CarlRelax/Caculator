cmake_minimum_required(VERSION 3.22)
project(hello)
# set(CMAKE_CXX_STANDARD 11)
#CMAKE_CURRENT_SOURCE_DIR 宏表示当前访问的 CMakeLists.txt 文件所在的路径
# file(GLOB_RESOURCE list ${PROJECT_SOURCE_DIR}/*.cpp)
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/ COMP_LIST)
# set(HOME /home/carl/Documents/github_develop)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/script)
# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/add/include ${CMAKE_CURRENT_SOURCE_DIR}/src/multiple/include)
file(GLOB HEADA ${PROJECT_SOURCE_DIR}/src/add/include)
file(GLOB HEADB ${PROJECT_SOURCE_DIR}/src/multiple/include)

include_directories(${HEADA} ${HEADB})
set(LIB_SHARED ${CMAKE_CURRENT_SOURCE_DIR}/lib)
link_directories(${LIB_SHARED})
file(GLOB LIB ${PROJECT_SOURCE_DIR}/lib/*.so)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/add)
add_subdirectory(${PROJECT_SOURCE_DIR}/src/multiple)

link_libraries(multiple add)
add_executable(app main.cpp)