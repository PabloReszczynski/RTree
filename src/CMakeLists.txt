set(core_SRCS RTree.cpp RTree.h Rectangle.cpp Rectangle.h IO.cpp IO.h)

add_library(core ${core_SRCS})
add_executable(exe main.cpp RTree.cpp RTree.h)
target_link_libraries(exe core)