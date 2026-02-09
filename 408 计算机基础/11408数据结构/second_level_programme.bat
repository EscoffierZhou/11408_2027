@echo off
setlocal EnableDelayedExpansion

:: 切换到 bat 文件所在目录
cd /d "%~dp0"

set hasDir=0
set hasCpp=0

:: 检测是否存在文件夹
for /d %%d in (*) do (
    set hasDir=1
)

:: 检测是否存在 cpp 文件
for %%f in (*.cpp) do (
    set hasCpp=1
)

:: 覆盖生成 CMakeLists.txt
if %hasDir%==1 (
    (
        for /d %%d in (*) do (
            echo message(STATUS "***  Exiting 2-level folder %%d")
            echo add_subdirectory(%%d)
        )
    ) > CMakeLists.txt

) else if %hasCpp%==1 (
    (
        echo message(STATUS "====================================================")
        for %%f in (*.cpp) do (
            set name=%%~nf
            echo message(STATUS "&&&    found executable programme: !name!")
            echo add_executable(!name! %%f)
        )
    ) > CMakeLists.txt
)

endlocal
