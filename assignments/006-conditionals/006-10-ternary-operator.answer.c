/*
  UNDERSTANDING TERNARY OPERATOR - NEGATIVE VALUE DETECTOR
  1) Write a function is_it_a_negative_value which takes in one argument int x
     and returns an int
  2) Implement is_it_a_negative_value as follows,
     declare a local variable int result and assign -1 to it
  3) if x is lesser than 0 set result variable to 1
     if x is 0 or greater than 0 then set result variable to 0
     hint: to set the variable result use the ternary operator of style ? :
  4) Return variable result's value from function is_it_a_negative_value
  5) From inside main function
     Call is_it_a_negative_value with a value of 2 and print the return value
  6) From inside main function
     Call is_it_a_negative_value with a value of -3 and print the return value
*/

#include <stdio.h>

// 1) Write a function is_it_a_negative_value which takes in one argument int x
//    and returns an int
int is_it_a_negative_value ( int x )
{
  // 2) Implement is_it_a_negative_value as follows,
  //    declare a local variable int result and assign -1 to it
  int result = -1;

  // 3) if x is lesser than 0 set result variable to 1
  //    if x is 0 or greater than 0 then set result variable to 0
  //    hint: to set the variable result use the ternary operator of style ? :
  result = ( x < 0 ) ? 1 : 0;

  // 4) Return variable result's value from function is_it_a_negative_value
  return result;
}


int main()
{
  // 5) From inside main function
  //    Call is_it_a_negative_value with a value of 2 and print the return value
  printf(" is_it_a_negative_value(+2) is = %d\n", is_it_a_negative_value(+2));

  // 6) From inside main function
  //    Call is_it_a_negative_value with a value of -3 and print the return value
  printf(" is_it_a_negative_value(-3) is = %d\n", is_it_a_negative_value(-3));
}
