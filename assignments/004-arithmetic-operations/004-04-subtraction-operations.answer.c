
/*
  UNDERSTANDING SUBTRACTION OPERATOR IN C - THE CITY BOOK STORE

  Used this template to complete this exercise

  PART ONE
  ========
  1) Declare a int variable total_comics_count and assign a value of 128
  2) Declare a int variable children_comics_count and assign a value of 54
  3) Declare a int variable non_children_comics_count and assign a value of 0
  4) Find the count of non_children_comics by subtracting children_comics_count
     from total_comics_count
  5) Print the value of non_children_comics answer should be 74

  PART TWO
  ========
  6) In a sale 15 children comics were sold, so children comics count now decreases by 15.
     Use the subtraction operator like "x = x - some_value" and update
     variable children_comics_count to reflect the 15 sold children comics count
  7) Print the new value of variable children_comics_count

  PART THREE
  ==========
  8) There are 3 children comics that gets damaged during sale and gets trashed
     so children comics count decreases by 3 further.
     Use the -= decrement operator like "x -= some_value " and update
     variable children_comics_count
  9) Print the new decremented value of variable children_comics_count
*/


#include <stdio.h>

int main()
{
                                // PART ONE
  // 1) Declare a int variable total_comics_count and assign a value of 128
  int total_comics_count = 128;

  // 2) Declare a int variable children_comics_count and assign a value of 54
  int children_comics_count = 54;

  // 3) Declare a int variable non_children_comics_count and assign a value of 0
  int non_children_comics_count = 0;

  // 4) Find the count of non_children_comics by subtracting children_comics_count
  //    from total_comics_count
  non_children_comics_count = total_comics_count - children_comics_count;

  // 5) Print the value of non_children_comics answer should be 74
  printf("non_children_comics_count is = %d\n", non_children_comics_count);

                                // PART TWO
  // 6) In a sale 15 children comics were sold, so children comics count now decreases by 15.
  //    Use the subtraction operator like "x = x - some_value" and update
  //    variable children_comics_count to reflect the 15 sold children comics count
  children_comics_count = children_comics_count - 15;

  // 7) Print the new value of variable children_comics_count
  printf("children_comics_count is = %d\n", children_comics_count);

                                // PART THREE
  // 8) There are 3 children comics that gets damaged during sale and gets discarded
  //    so children comics count decreases by 3 further.
  //    Use the -= decrement operator like "x -= some_value " and update
  //    variable children_comics_count
  children_comics_count -= 3;

  // 9) Print the new decremented value of variable children_comics_count
  printf("children_comics_count is = %d\n", children_comics_count);
}
