cmake_minimum_required(VERSION 3.10)
project(String_Processing C)

set(CMAKE_C_STANDARD 11)

add_executable(String_Processing src/main.c src/strp.c src/string.h src/stra.c)