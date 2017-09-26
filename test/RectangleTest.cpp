#include "Rectangle.h"
#include <gtest/gtest.h>
#include "boost/archive/text_oarchive.hpp"
#include "boost/archive/text_iarchive.hpp"
#include <fstream>
//FIXME: Use mocking for fstream!

class RectangleTest : public ::testing::Test {};

TEST_F(RectangleTest, SerializeTest) {
  const Rectangle rect(1,2,3,4);
  std::ofstream ofs("test_filename");
 // boost::archive::text_oarchive ar(ofs);
  //ar & rect;
}
