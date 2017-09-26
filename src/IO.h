#ifndef RTREE_IO_H
#define RTREE_IO_H

#include "Rectangle.h"

class IO {
  std::string filename;
  public:
    IO(const std::string filename) : filename(filename) {}
    void read(Rectangle *root);
    void write(Rectangle *root);
};


#endif //RTREE_IO_H
