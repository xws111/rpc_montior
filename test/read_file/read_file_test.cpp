#include "read_file.h"

#include <gtest/gtest.h>
#include <monitor_info.grpc.pb.h>
#include <monitor_info.pb.h>

using namespace monitor;

static void test() {
  monitor::FileReader test_reader("/work/test/read_file/softirqs");
  std::vector<std::string> softirq;
  test_reader.read_line(&softirq);
  EXPECT_EQ(softirq[0], "CPU0");
}

TEST(utils_test, read_file_test) { test(); }

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}