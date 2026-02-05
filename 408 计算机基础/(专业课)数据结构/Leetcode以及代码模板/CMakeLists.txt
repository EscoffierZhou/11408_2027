# 仅顶层使用minimum_required表示顶层工程
cmake_minimum_required(VERSION 3.29)
project(DS_408)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(Template)
add_subdirectory(Leetcode)
message(STATUS "====================================================")
message(STATUS "!!! Cmake built successfully")
message(STATUS "====================================================")

# 新建题目做法
# (1)新建目录:Template/树/95.验证二叉搜索树/
# (2)放文件:main.cpp+CMakeLists.txt
# (3a)修改CMakeLists.txt(添加目录):上一级:add_subdirectory(<新文件夹名称>>)
# (3b)修改CMakeLists.txt(添加cpp):同一级:add_executable(<项目名称英文名称><文件名比如main.cpp>)
# (4)重新加载最外层CMakeList.txt

# 项目目录
# Template:ADT定义/通用操作(遍历/查找/构造/销毁)
# Leetcode:具体的题目实现


