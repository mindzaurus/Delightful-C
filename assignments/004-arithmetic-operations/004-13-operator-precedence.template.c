/*
  UNDERSTANDING OPERATOR PRECEDENCE OPERATOR IN C - BEARS AND SALMONS

  1) Declare a variable black_bear_count and assign a value of 17
  2) Declare a variable brown_bear_count and assign a value of 14
  3) Declare a variable number_of_fish_per_bear and assign a value of 12
  4) Declare a variable number_of_total_fish and assign a value of 0
  5) Calculate the total_fish_required_to_feed_bears by adding black_bear_count and brown_bear_count
     and multiply total bears X number_of_fish_per_bear
     total_fish_required_to_feed_bears = black_bear_count + brown_bear_count * number_of_fish_per_bear
  6) Print calculated value of total_fish_required_to_feed_bears, you will see 185 being printed this is wrong
     17 + 168 will be calculated because 12 X 14 will have higher precedence and gets calculated as 168
  7) Fix this problem by correcting operator precedence and calculating total_fish_required_to_feed_bears
     Use paranthesis ( ) to fix this problem
  8) Print calculated value of total_fish_required_to_feed_bears after correcting operator precedence issue
     answer should be 372 as 31 X 12 should be the correct calculation done
*/

/*
  Output can look like
  Before fixing operator precedence total_fish_required_to_feed_bears is = 185
  After fixing operator precedence total_fish_required_to_feed_bears is = 372
*/

#include <stdio.h>

int main()
{
  // 1) Declare a variable black_bear_count and assign a value of 17


  // 2) Declare a variable brown_bear_count and assign a value of 14


  // 3) Declare a variable number_of_fish_per_bear and assign a value of 12


  // 4) Declare a variable total_fish_required_to_feed_bears and assign a value of 0


  // 5) Calculate the total_fish_required_to_feed_bears by adding black_bear_count and brown_bear_count
  //    and multiply total bears X number_of_fish_per_bear
  //    total_fish_required_to_feed_bears = black_bear_count + brown_bear_count * number_of_fish_per_bear


  // 6) Print calculated value of total_fish_required_to_feed_bears,
  //    you will see 185 being printed this is wrong
  //    17 + 168 will be calculated because 12 X 14 will have higher precedence
  //    and gets calculated as 168


  // 7) Fix this problem by correcting operator precedence and calculating total_fish_required_to_feed_bears
  //    Use paranthesis ( ) to fix this problem


  // 8) Print calculated value of total_fish_required_to_feed_bears
  //    after correcting operator precedence issue
  //    answer should be 372 as 31 X 12 should be the correct calculation done

}
