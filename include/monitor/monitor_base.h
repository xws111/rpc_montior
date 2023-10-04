#ifndef MONITOR_BASE_H_
#define MONITOR_BASE_H_

#include "monitor_info.pb.h"

namespace monitor {
class MonitorBase {
 public:
  MonitorBase() {}
  virtual ~MonitorBase() {}
  virtual void update_once(rpc_monitor::MonitorInfo* monitor_info) = 0;
  virtual void stop_update() = 0;
};

}  // namespace monitor

#endif