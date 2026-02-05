cmake_minimum_required(VERSION 3.29)
project(USETC_template)
set(CMAKE_CXX_STANDARD 17)
# GLOB_RECURSE：递归匹配所有子目录
file(GLOB_RECURSE CPP_FILES
        Leetcode/*.cpp
        Template/*.cpp
)
# 每个 cpp 生成一个可执行文件,并且禁止重名
foreach(cpp_file ${CPP_FILES})
    file(RELATIVE_PATH rel_path ${CMAKE_SOURCE_DIR} ${cpp_file})
    string(REPLACE "/" "_" exec_name ${rel_path})
    string(REPLACE "." "_" exec_name ${exec_name})
    add_executable(${exec_name} ${cpp_file})
endforeach()
