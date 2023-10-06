#ifndef RPC_CLIENT_H_
#define RPC_CLIENT_H_

#include <memory>

#include <grpc/grpc.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/grpcpp.h>

#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {
class RpcClient {
 public:
  RpcClient();
  ~RpcClient();
  void SetMonitorInfo(const rpc_monitor::MonitorInfo& monitor_info);
  void GetMonitorInfo(rpc_monitor::MonitorInfo* monitor_info);

 private:
  std::unique_ptr<rpc_monitor::GrpcManager::Stub> stub_ptr_;
};

}  // namespace monitor

#endif