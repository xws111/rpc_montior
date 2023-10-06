

set(SOURCES
   main.cpp
   cpu_softirq_monitor.cpp
   cpu_load_monitor.cpp
   cpu_stat_monitor.cpp
   mem_monitor.cpp
   net_monitor.cpp
   ${CMAKE_SOURCE_DIR}/src/utils/read_file.cpp
)


add_executable(monitor ${SOURCES})

target_link_libraries(monitor
    PUBLIC
    monitor_proto
    client
    boost_system
    boost_chrono
)