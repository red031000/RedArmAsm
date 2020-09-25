cmake_minimum_required(VERSION 3.17)
project(redarmasm LANGUAGES C VERSION 0.1)

set(CMAKE_C_STANDARD 11)

add_executable(redarmasm src/main.c src/args.c src/exception.c src/file.c)
target_include_directories(redarmasm PRIVATE include)
