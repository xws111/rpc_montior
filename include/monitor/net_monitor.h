#ifndef NET_MONITOR_H_
#define NET_MONITOR_H_

#include <string.h>
#include <string>
#include <unordered_map>
#include <boost/chrono.hpp>

#include "monitor_base.h"
#include "monitor_info.pb.h"

namespace monitor {
class NetMonitor : public MonitorBase {
  struct NetInfo {
    std::string name;
    int64_t rcv_bytes;
    int64_t rcv_packets;
    int64_t err_in;
    int64_t drop_in;
    int64_t snd_bytes;
    int64_t snd_packets;
    int64_t err_out;
    int64_t drop_out;
    boost::chrono::steady_clock::time_point timepoint;
  };
  public:
  NetMonitor() {}
  void update_once(rpc_monitor::MonitorInfo* monitor_info) override;
  void stop_update() override {}

 private:
  std::unordered_map<std::string, struct NetInfo> net_info_;
};
}


#endif