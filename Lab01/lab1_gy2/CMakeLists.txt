cmake_minimum_required(VERSION 3.17)
project(lab1_gy2 C)

set(CMAKE_C_STANDARD 99)

add_executable(lab1_gy2 main.c cmake-build-debug/function.c cmake-build-debug/function.h cmake-build-debug/function2.c cmake-build-debug/function2.h cmake-build-debug/function3.h cmake-build-debug/function3.c)