cmake_minimum_required(VERSION 3.10.2)
project(rpc_monitor LANGUAGES CXX)

set(CMAKE_MOUDLE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(cmake/tools/proto)

add_subdirectory(tools)
add_subdirectory(test)