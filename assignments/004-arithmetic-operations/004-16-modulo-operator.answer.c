/*
  UNDERSTANDING MODULO OPERATOR IN C - TOUR GROUP AND BISCUITS

  1) Declare a variable total_members_in_tour_group and assign a value of 8
  2) Declare a variable total_number_of_biscuits and assign a value of 42
  3) Declare a variable number_of_biscuits_after_equal_distribution and assign a value 0
  4) Calculate how many biscuits will remain undistibuted after equally distributing the 42 biscuits to
     8 tour group members, ensure no member gets more or lesser biscuits than other members
     hint: use the modulo operator %
  5) Store calculated value in number_of_biscuits_after_equal_distribution and print it,
     2 biscuits should remain
*/

#include <stdio.h>

int main()
{
  // 1) Declare a variable total_members_in_tour_group and assign a value of 8
  int total_members_in_tour_group = 8;

  // 2) Declare a variable total_number_of_biscuits and assign a value of 42
  int total_number_of_biscuits = 42;

  // 3) Declare a variable number_of_biscuits_after_equal_distribution and assign a value 0
  int number_of_biscuits_after_equal_distribution = 0;

  // 4) Calculate how many biscuits will remain undistibuted after equally distributing the 42 biscuits to
  //    8 tour group members, ensure no member gets more or lesser biscuits than other members
  //    hint: use the modulo operator %
  //    Store calculated value in number_of_biscuits_after_equal_distribution
  number_of_biscuits_after_equal_distribution = total_number_of_biscuits % total_members_in_tour_group;

  // 5) Print number_of_biscuits_after_equal_distribution, 2 biscuits should remain
  printf("number_of_biscuits_after_equal_distribution is = %d\n",
    number_of_biscuits_after_equal_distribution);
}
