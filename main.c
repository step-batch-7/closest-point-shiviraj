#include <stdio.h>
#include "point.h"

int main(void)
{
  POINT food_points[] = FOOD_TARGETS;
  POINT organism_points[] = ORGANISM_LOCATIONS;
  POINT closest_food_point;
  int total_points = sizeof(food_points) / sizeof(POINT);

  for (int i = 0; i < total_points; i++)
  {
    get_closest_food(food_points, total_points, organism_points[i], &closest_food_point);
    printf("Location of organism: [%d %d],\t", organism_points[i].x, organism_points[i].y);
    printf("Closest food target : [%d %d]\n", closest_food_point.x, closest_food_point.y);
  }
  return 0;
}