#ifndef READ_FILE_H_
#define READ_FILE_H_

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace monitor {
class FileReader {
 public:
  explicit FileReader(const std::string& name) : ifs_(name) {}
  ~FileReader() { ifs_.close(); }
  bool read_line(std::vector<std::string>* args);
  static std::vector<std::string> get_stats_lines(const std::string& stat_file,
                                                  const int line_count) {
    std::vector<std::string> stats_lines;
    std::ifstream buffer(stat_file);
    for (int line_num = 0; line_num < line_count; line_num++) {
      std::string line;
      std::getline(buffer, line);
      if (line.empty()) {
        break;
      }
      stats_lines.push_back(line);
    }
    return stats_lines;
  }

 private:
  std::ifstream ifs_;
};

}  // namespace monitor

#endif