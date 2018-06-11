

/*
  1) integer subtract: number of adults = total visitors in zoo - number of children

  2) float subtract: dollars in hand = total dollars we had - cost of coffee

  3) -= is an increment operator x -= 2 is same as x = x - 2
*/

#include <stdio.h>

int main()
{
  int total_visitors_in_zoo = 79;
  int number_of_children = 36;

  int number_of_adults = total_visitors_in_zoo - number_of_children;
  printf("Number of Adults = %d \n", number_of_adults);


  float total_dollars_we_had = 16.45;
  float cost_of_coffee = 2.20;

  float dollars_in_hand = total_dollars_we_had - cost_of_coffee;
  printf("Dollars in hand after buying coffee %f \n", dollars_in_hand);


  int x = 5;
  x = x - 2;
  printf("x = x - 2 is %d \n", x);

  x = 5;
  x -= 2;
  printf("x -= 2 is %d \n", x);
}
