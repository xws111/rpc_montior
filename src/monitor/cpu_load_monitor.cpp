#include <string>

#include "cpu_load_monitor.h"
#include "read_file.h"

#include "monitor_info.pb.h"

namespace monitor {
void CpuLoadMonitor::update_once(rpc_monitor::MonitorInfo* monitor_info) {
  FileReader cpu_load_file(std::string("/tmp_proc/loadavg"));
  std::vector<std::string> cpu_load;
  cpu_load_file.read_line(&cpu_load);
  load_avg_1_ = std::stof(cpu_load[0]);
  load_avg_3_ = std::stof(cpu_load[1]);
  load_avg_15_ = std::stof(cpu_load[2]);

  auto cpu_load_msg = monitor_info->mutable_cpu_load();
  cpu_load_msg->set_load_avg_1(load_avg_1_);
  cpu_load_msg->set_load_avg_3(load_avg_3_);
  cpu_load_msg->set_load_avg_15(load_avg_15_);
  return;
}
float CpuLoadMonitor::get_load_avg(int min) {
  if (min == 1)
  {
    return load_avg_1_;
  }
  else if (min == 3)
  {
    return load_avg_3_;
  }
  else if (min == 15)
  {
    return load_avg_15_;
  }
  else
  {
    return 0;
  }
}
}  // namespace monitor