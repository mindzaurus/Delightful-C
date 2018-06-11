
#include <stdio.h>

/*
  1) integer multiplication: total number of candies = candies per box * number of boxes

  2) float multiplication: total cost of phones sold = cost per phone * number of phones sold on Christmas eve

  3) x *= 2 is same as x = x * 2

*/

int main()
{
  int number_of_candies_per_box = 33;
  int number_of_boxes = 45;

  int total_number_of_candies = number_of_candies_per_box * number_of_boxes;
  printf("Total number of candies = %d \n", total_number_of_candies);

  float cost_per_phone = 176.45;
  float number_of_phones_sold = 25.0;

  float total_cost_of_phones_sold = cost_per_phone * number_of_phones_sold;
  printf("Total cost of phones sold on Christmas eve = %f \n", total_cost_of_phones_sold);

  int x = 5;
  x = x * 2;
  printf("x = x * 2 is %d \n", x);

  x = 5;
  x *= 2;
  printf("x *= 2 is %d \n", x);
}
