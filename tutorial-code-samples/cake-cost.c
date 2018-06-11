
#include <stdio.h>

int main()
{
  float cost_per_cake = 1.20;
  unsigned int cake_sold_for_whole_day = 36;

  float total_cost = cost_per_cake * (float) cake_sold_for_whole_day;
  printf("Total cost %.2f \n", total_cost);
}
