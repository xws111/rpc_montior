#ifndef RPC_MANAGER_H_
#define RPC_MANAGER_H_

#include <unordered_map>

#include <grpcpp/support/status.h>

#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {
class GrpcManagerImpl : public rpc_monitor::GrpcManager::Service {
 public:
  GrpcManagerImpl();

  virtual ~GrpcManagerImpl();

  ::grpc::Status SetMonitorInfo(::grpc::ServerContext* context,
                                const rpc_monitor::MonitorInfo* request,
                                ::google::protobuf::Empty* response);
  ::grpc::Status GetMonitorInfo(::grpc::ServerContext* context,
                                const ::google::protobuf::Empty* request,
                                rpc_monitor::MonitorInfo* response);

 private:
  rpc_monitor::MonitorInfo monitor_infos_;
};
}  // namespace monitor

#endif  // RPC_MANAGER_H_