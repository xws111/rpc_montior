
add_subdirectory(client)
add_subdirectory(server)
add_subdirectory(monitor)

# 查找qt5的库，约等于包含头文件
find_package(Qt5 
  REQUIRED COMPONENTS
  Core
  Widgets
)

set(CMAKE_AUTOMOC on)
set(CMAKE_AUTORCC on)
set(CMAKE_AUTOUIC on)

set(SOURCES
  qt/cpu_load_model.h
  qt/cpu_softirq_model.h
  qt/cpu_stat_model.h
  qt/mem_model.h
  qt/monitor_model_base.h
  qt/net_model.h
  qt/main.cpp
  qt/monitor_widget.cpp
  qt/cpu_load_model.cpp
  qt/cpu_softirq_model.cpp
  qt/cpu_stat_model.cpp
  qt/mem_model.cpp
  qt/net_model.cpp
  qt/monitor_model_base.cpp
  client/rpc_client.cpp
  monitor/cpu_load_monitor.cpp
  monitor/cpu_softirq_monitor.cpp
  monitor/cpu_stat_monitor.cpp
  monitor/mem_monitor.cpp
  monitor/net_monitor.cpp
  utils/read_file.cpp

)

add_executable(monitor.exe ${SOURCES})  



target_link_libraries(monitor.exe 
  PUBLIC
  client
  Qt5::Widgets
  Qt5::Core
  monitor_proto
  boost_system
  boost_chrono
)

