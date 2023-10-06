#ifndef CPU_LOAD_MONITOR_H_
#define CPU_LOAD_MONITOR_H_

#include <string>

#include "monitor_base.h"
#include "monitor_info.pb.h"

namespace monitor
{
class CpuLoadMonitor : public MonitorBase{
  public:
    CpuLoadMonitor() {}
    void update_once(rpc_monitor::MonitorInfo* monitor_info) override;
    void stop_update() override {}
    float get_load_avg(int min);
  private:
    float load_avg_1_;
    float load_avg_3_;
    float load_avg_15_;
};

}

#endif