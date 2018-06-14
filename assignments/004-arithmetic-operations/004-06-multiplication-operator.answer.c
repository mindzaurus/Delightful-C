
/*
  UNDERSTANDING SUBTRACTION OPERATOR IN C - THE CHOCLATE FACTORY

  Used this template to complete this exercise

  PART ONE
  ========
  1) Declare a int variable total_machine_count and assign a value of 43
  2) Declare a int variable chocolates_per_machine_per_hour and assign a value of 25
  3) Declare a int variable total_chocolates_per_hour and assign a value of 0
  4) Find the count of total_chocolates_per_hour by multiplying total_machine_count
     and chocolates_per_machine_per_hour
  5) Print the value of total_chocolates_per_hour, answer should be 1075

  PART TWO
  ========
  6) The factory planned to double the total_machine_count in 6 months
     Use the multiplication operator like "x = x * 2" and update
     variable total_machine_count to reflect the doubled total_machine_count
  7) Print the new value of variable total_machine_count

  PART THREE
  ==========
  8) The factory also considered what if it tripled the total_machine_count in 6 months
     Use the *= multiplication operator like "x *= 3" and update
     variable total_machine_count
  9) Print the new value of variable total_machine_count
*/


#include <stdio.h>

int main()
{
                                // PART ONE
  // 1) Declare a int variable total_machine_count and assign a value of 43
  int total_machine_count = 43;

  // 2) Declare a int variable chocolates_per_machine_per_hour and assign a value of 25
  int chocolates_per_machine_per_hour = 25;

  // 3) Declare a int variable total_chocolates_per_hour and assign a value of 0
  int total_chocolates_per_hour = 0;

  // 4) Find the count of total_chocolates_per_hour by multiplying total_machine_count
  //    and chocolates_per_machine_per_hour
  total_chocolates_per_hour = total_machine_count * chocolates_per_machine_per_hour;

  // 5) Print the value of total_chocolates_per_hour, answer should be 1075
  printf("total_chocolates_per_hour is %d\n", total_chocolates_per_hour);


                                // PART TWO
  // 6) The factory planned to double the total_machine_count in 6 months
  //    Use the multiplication operator like "x = x * 2" and update
  //    variable total_machine_count to reflect the doubled total_machine_count
  total_machine_count = total_machine_count * 2;

  // 7) Print the new value of variable total_machine_count
  printf("doubled total_machine_count is %d\n", total_machine_count);


                                // PART THREE
  total_machine_count = 43; // leave this line intact
  // 8) The factory also considered what if it tripled the total_machine_count in 6 months
  //    Use the *= multiplication operator like "x *= 3" and update
  //    variable total_machine_count
  total_machine_count *= 3;

  // 9) Print the new value of variable total_machine_count
  printf("tripled total_machine_count is %d\n", total_machine_count);
}
