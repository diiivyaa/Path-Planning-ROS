#include <iostream>
#pragma once

#define PI 3.14159265
#define THRESHOLD_SWITCH 0.0025
#define dt 0.1
#define MAX_ANGLE_DEVIATION 8 //in degree
#define GRID_SIZE 9
#define GOAL_X 5.0 //target position
#define GOAL_Y 6.0 //target position
#define WALL_DETECT_DIST 3.5
#define OPEN_DETECT_DIST 1.5

typedef std::pair<int, int> coord; 

enum{UNDEFINED=-1, NORTH=0, EAST=1, SOUTH=2, WEST=3};
enum{OPEN=0, WALL=1};
enum{GOAL_NOT_REACH=0, GOAL_REACH=1};

coord GoalCoord(5, 6);
coord startCoord(0, 0);

typedef struct{
  coord position;
  bool wallUp;
  bool wallDown;
  bool wallLeft;
  bool wallRight;
} cell;

cell Map[GRID_SIZE][GRID_SIZE];

int manhattenDist(coord start, coord end){
  int x = abs(start.first - end.first);
  int y = abs(start.second - end.second);
  return x+y;
}
