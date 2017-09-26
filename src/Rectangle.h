#ifndef RTREE_RECTANGLE_H
#define RTREE_RECTANGLE_H

#include "RTree.h"
#include "boost/serialization/base_object.hpp"

class Rectangle : public Node {
  int x, y, w, h;

  friend std::ostream & operator <<(std::ostream &os, const Rectangle &rect);
  friend class boost::serialization::access;

  template<class Archive>
  void serialize(Archive &ar, const unsigned int version);

  public:
    Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

};


#endif //RTREE_RECTANGLE_H
