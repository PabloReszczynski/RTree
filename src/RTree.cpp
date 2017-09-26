#include "RTree.h"

template<class Archive>
void RTree::serialize(Archive &ar, const unsigned int version) {
  ar & boost::serialization::base_object<Node>(*this);
  ar & children;
}
