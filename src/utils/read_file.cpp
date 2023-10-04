#include "utils/read_file.h"

namespace monitor
{

bool FileReader::read_line(std::vector<std::string>* args)
{
  std::string line;
  std::getline(ifs_, line);
  if (ifs_.eof() || line.empty())
  {
    return false;
  }

  std::istringstream line_ss(line);
  while (!line_ss.eof())
  {
    std::string word;
    line_ss >> word;
    args->push_back(word);
  }
  return true;
}


} // namespace monitor
