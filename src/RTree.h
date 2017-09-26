#ifndef RTREE_RTREE_H
#define RTREE_RTREE_H

#include "boost/serialization/vector.hpp"

class Node {
  friend class boost::serialization::access;
  template<class Archive>
  void serialize(Archive &ar, const unsigned int version) {}
};

class RTree : public Node {
  std::vector<Node *> children;

  friend class boost::serialization::access;
  template<class Archive>
  void serialize(Archive &ar, const unsigned int version);

  public:
    RTree() : children() {}
    RTree(std::vector<Node *> ch) : children(ch) {}

};


#endif //RTREE_RTREE_H
