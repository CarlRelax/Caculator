cmake_minimum_required(VERSION 3.22) #设置cmake版本号标准，不能低于此标准
project(hello)	#项目名
set(CMAKE_CXX_STANDARD 11) # 设置C++标准
# CMAKE_CURRENT_SOURCE_DIR 宏表示当前访问的 CMakeLists.txt 文件所在的路径

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/script)	#设置可执行文件的路径，即编译输出路径

set(ADD_INCLUDE ${PROJECT_SOURCE_DIR}/src/add/include)
set(MUL_INCLUDE ${PROJECT_SOURCE_DIR}/src/multiple/include)
include_directories( ${ADD_INCLUDE}  ${MUL_INCLUDE})	#设置头文件路径

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)	#设置要连接的库的路径

add_subdirectory(${PROJECT_SOURCE_DIR}/src/add)		#设置功能模块的路径，此路径下必须包含且只包含一个CMakeLists.txt
add_subdirectory(${PROJECT_SOURCE_DIR}/src/multiple)	#设置功能模块的路径，此路径下必须包含且只包含一个CMakeLists.txt

add_executable(app main.cpp)	#生成可执行文件
target_link_libraries(app multiple add) #把动态库链接到可执行文件上，动态库必须现生成可执行文件再链接
