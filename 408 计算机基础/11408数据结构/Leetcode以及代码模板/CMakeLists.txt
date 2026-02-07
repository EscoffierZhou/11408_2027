# 整体路径中文路径可能后序还有坑
# 路径里面不要出现()和*,出现若干拼接问题

cmake_minimum_required(VERSION 3.29)
project(DS_408)
set(CMAKE_CXX_STANDARD 23)

message(STATUS "***  Exiting 1-level folder Template")
add_subdirectory(Template)
message(STATUS "***  Exiting 1-level folder Leetcode")
add_subdirectory(Leetcode)
message(STATUS "***  Exiting 1-level folder Textbook")
add_subdirectory(Textbook)
