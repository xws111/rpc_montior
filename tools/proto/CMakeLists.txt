# 查找protobuf库 CONFIG表示带有CMake配置的Protobuf库 REQUIRED表示如果查找不到就会报错，为必需的库
find_package(protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)
find_package(c-ares CONFIG)

set(PROTO_OUTPUT_DIR ${CMAKE_BINARY_DIR})

file(GLOB PROTO_FILES "*.proto")
set(PROTO_FILES ${PROTO_FILES} PARENT_SCOPE)


add_library(monitor_proto ${PROTO_FILES})
target_link_libraries(monitor_proto
    PUBLIC
        protobuf::libprotobuf
        gRPC::grpc
        gRPC::grpc++
)

target_include_directories(monitor_proto PUBLIC
    ${PROTOBUF_INCLUDE_DIRS} 
    ${CMAKE_CURRENT_BINARY_DIR}
)

get_target_property(grpc_cpp_plugin_location gRPC::grpc_cpp_plugin LOCATION)
protobuf_generate(TARGET monitor_proto LANGUAGE cpp)
protobuf_generate(TARGET monitor_proto LANGUAGE grpc GENERATE_EXTENSIONS .grpc.pb.h .grpc.pb.cc PLUGIN "protoc-gen-grpc=${grpc_cpp_plugin_location}")