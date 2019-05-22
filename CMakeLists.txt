cmake_minimum_required(VERSION 2.8.3)
project(myProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(catkin REQUIRED COMPONENTS 
    roscpp
    )

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${roscpp_INCLUDE_DIRS}
)


add_executable(teleop_node src/Teleop.cc)
target_link_libraries(teleop_node
    ${catkin_LIBRARIES} 
    ${roscpp_LIBRARIES})

