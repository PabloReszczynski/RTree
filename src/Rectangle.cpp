#include "Rectangle.h"

template<class Archive>
void Rectangle::serialize(Archive &ar, const unsigned int version) {
  ar & boost::serialization::base_object<Node>(*this);
  ar & x & y & w & h;
}
