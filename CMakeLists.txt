cmake_minimum_required(VERSION 3.10.2)
project(rpc_monitor LANGUAGES CXX)

set(CMAKE_MOUDLE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include/utils)
include_directories(include/monitor)
include_directories(cmake/tools/proto)
include_directories(include/qt)
include_directories(include/client)
include_directories(include/server)

add_subdirectory(src)
add_subdirectory(tools)
# add_subdirectory(test)