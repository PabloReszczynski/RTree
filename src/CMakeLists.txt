# BOOST serialization
include(../DownloadProject/DownloadProject.cmake)
download_project(
  PROJ  boost
  GIT_REPOSITORY https://github.com/boost-cmake/boost
  GIT_TAG master
  UPDATE_DISCONNECTED
)

find_package(
  BOOST 1.65.1 REQUIRED
  BOOST_DEBUG ON
  COMPONENTS
  serialization archive
)

include_directories(${boost_INCLUDE_DIR})

# SRC
set(core_SRCS RTree.cpp RTree.h Rectangle.cpp Rectangle.h IO.cpp IO.h)
add_library(core ${core_SRCS})
add_executable(exe main.cpp RTree.cpp RTree.h)
target_link_libraries(exe core ${Boost_LIBRARIES})
