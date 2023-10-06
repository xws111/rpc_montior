
# 设置包含gtest并远程下载
include(FetchContent)
FetchContent_Declare(
  gtest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# 关闭gmock
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)


# read_file的测试文件
add_executable(
  read_file_test
  read_file/read_file_test.cpp
  ${CMAKE_SOURCE_DIR}/src/utils/read_file.cpp
)


# cpu_load测试文件
add_executable(
  cpu_load_test
  cpu_load/cpu_load_test.cpp
  ${CMAKE_SOURCE_DIR}/src/monitor/cpu_load_monitor.cpp
  ${CMAKE_SOURCE_DIR}/src/utils/read_file.cpp
)


# 链接库
target_link_libraries(
  read_file_test
PUBLIC
  gtest_main
  monitor_proto
  boost_system
  boost_chrono
)

target_link_libraries(
  cpu_load_test
PUBLIC
  gtest_main
  monitor_proto
  boost_system
  boost_chrono
)

