#include "IO.h"
#include "boost/archive/text_oarchive.hpp"
#include "boost/archive/text_iarchive.hpp"
#include <fstream>

void IO::read(Rectangle *root) {
  std::ifstream ifs(filename);
  boost::archive::text_iarchive ia(ifs);
  ia >> *root;
}

void IO::write(Rectangle *root) {
  std::ofstream ofs(filename);
  boost::archive::text_oarchive oa(ofs);
  //oa << *root;
}
