message(STATUS "====================================================")

message(STATUS "&&&    found executable programme: Fibonacci_nonrecursive.cpp(斐波那契数列非递归)")
add_executable(Fibonacci_nonrecursive Fibonacci_nonrecursive.cpp)

message(STATUS "&&&    found executable programme: Fibonacci_recursive.cpp(斐波那契额数列递归)")
add_executable(Fibonacci_recursive Fibonacci_recursive.cpp)

message(STATUS "&&&    found executable programme: Fibonacci_best.cpp(斐波那契额数列数学法)")
add_executable(Fibonacci_best Fibonacci_best.cpp)