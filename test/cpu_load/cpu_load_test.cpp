#include <gtest/gtest.h>
#include <monitor_info.pb.h>

#include "cpu_load_monitor.h"
#include "read_file.h"

#include "cpu_load.pb.h"

namespace monitor {
static void test() {
  CpuLoadMonitor test_cpu_load;
  rpc_monitor::MonitorInfo monitor_info;
  test_cpu_load.update_once(&monitor_info);
  auto data = monitor_info.mutable_cpu_load();
  EXPECT_EQ(data.load_avg_1_, 0);
}

TEST(cpu_test, cpu_load_test) { test(); }

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
}  // namespace monitor
