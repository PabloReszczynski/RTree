#include "Rectangle.h"
#include "boost/archive/text_oarchive.hpp"
#include <fstream>

int main(int argc, char **argv) {
  const Rectangle rect(1,2,3,4);
  std::ofstream ofs("test_filename");
  boost::archive::text_oarchive ar(ofs);
  ar & rect;
  return 0;
}
