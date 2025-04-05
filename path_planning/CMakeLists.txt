cmake_minimum_required(VERSION 3.0.2)
project(path)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    sensor_msgs
    nav_msgs
    geometry_msgs
    std_msgs
)
catkin_package(
    INCLUDE_DIRS include
    CATKIN_DEPENDS
        roscpp
        sensor_msgs
        nav_msgs
        geometry_msgs
        std_msgs
)
include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)
add_executable(
    range_detect_node
    src/range_detect_node.cpp
)
target_link_libraries(
    range_detect_node
    ${catkin_LIBRARIES}
)
add_executable(
    path_plan_node
    src/path_plan_node.cpp
)
target_link_libraries(
    path_plan_node
    ${catkin_LIBRARIES}
)
add_executable(
    bot_control_node
    src/bot_control_node.cpp
)
target_link_libraries(
    bot_control_node
    ${catkin_LIBRARIES}
)
