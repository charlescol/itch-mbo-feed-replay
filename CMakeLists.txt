cmake_minimum_required(VERSION 3.24)

project(itch_mbo_feed_replay VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(DATABENTO_USE_EXTERNAL_DATE ON)
set(DATABENTO_USE_EXTERNAL_HTTPLIB ON)
set(DATABENTO_USE_EXTERNAL_JSON ON)

include(FetchContent)

FetchContent_Declare(
    databento
    GIT_REPOSITORY https://github.com/databento/databento-cpp.git
    GIT_TAG main
)

FetchContent_MakeAvailable(databento)

add_executable(itch_mbo_feed_replay
    src/main.cpp
)

target_link_libraries(itch_mbo_feed_replay PRIVATE
    databento::databento
)