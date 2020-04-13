#include <math.h>
#include "point.h"

double get_distance(POINT point_1, POINT point_2)
{
  return hypot(point_2.x - point_1.x, point_2.y - point_1.y);
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location)
{
  double closest_food_distance = INFINITY;
  double curr_food_distance;
  for (int i = 0; i < points_length; i++)
  {
    curr_food_distance = get_distance(food_points[i], current_location);
    if (curr_food_distance < closest_food_distance)
    {
      closest_food_distance = curr_food_distance;
      *closest_food_location = food_points[i];
    }
  }
};