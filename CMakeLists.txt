cmake_minimum_required(VERSION 3.10.0)
project(itch_mbo_feed_replay VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(itch_mbo_feed_replay src/main.cpp)

