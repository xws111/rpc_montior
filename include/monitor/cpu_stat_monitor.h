#ifndef CPU_STAT_MONITOR_H_
#define CPU_STAT_MONITOR_H_

#include <string>
#include <unordered_map>

#include "monitor_base.h"

#include "monitor_info.pb.h"

namespace monitor {
class CpuStatMonitor : public MonitorBase {
  struct CpuStat {
    std::string cpu_name;
    float user;
    float system;
    float idle;
    float nice;
    float io_wait;
    float irq;
    float soft_irq;
    float steal;
    float guest;
    float guest_nice;
  };

 public:
  CpuStatMonitor() {}
  void update_once(rpc_monitor::MonitorInfo* monitor_info) override;
  void stop_update() override {}

 private:
  std::unordered_map<std::string, struct CpuStat> cpu_stat_map_;
};
}  // namespace monitor

#endif