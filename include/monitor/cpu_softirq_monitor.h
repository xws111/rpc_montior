#ifndef CPU_SOFTIRQ_MONITOR_H_
#define CPU_SOFTIRQ_MONITOR_H_

#include <string>
#include <unordered_map>

#include <boost/chrono.hpp>

#include "monitor_base.h"
#include "monitor_info.pb.h"

namespace monitor {
class CpuSoftIrqMonitor : public MonitorBase {
  struct SoftIrq {
    std::string cpu_name;
    int64_t hi;
    int64_t timer;
    int64_t net_tx;
    int64_t net_rx;
    int64_t block;
    int64_t irq_poll;
    int64_t tasklet;
    int64_t sched;
    int64_t hrtimer;
    int64_t rcu;
    boost::chrono::steady_clock::time_point timepoint;
  };
  public:
    CpuSoftIrqMonitor() {}
    void update_once(rpc_monitor::MonitorInfo* monitor_info) override;
    void stop_update() override {}
  private:
    std::unordered_map<std::string, struct SoftIrq> cpu_softirqs_;
};

}

#endif