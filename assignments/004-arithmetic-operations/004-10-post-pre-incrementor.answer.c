/*
  UNDERSTANDING DIVISION OPERATOR IN C - ECOMMERCE STORE LOGGED IN USER COUNTER

  Use this template to complete this exercise

  1) Declare a int variable current_logged_in_user_count and assign a value of 135
  2) Print the incremented value of current_logged_in_user_count in printf statement
     in the printf call. While passing argument use the post increment operator of
     syntax variable++
  3) Print the value of current_logged_in_user_count without post increment once again
     observe see the difference between print in step 2) and step 3)
  4) Reset the value of current_logged_in_user_count to 135
  5) Print the incremented value of current_logged_in_user_count in printf statement
     in the printf call. While passing argument use the pre increment operator of
     syntax ++variable
  6) Observe value 136 printed in step 5) and refer this back to tutorial if required
*/

#include <stdio.h>

int main()
{
  // 1) Declare a int variable current_logged_in_user_count and assign a value of 135
  int current_logged_in_user_count = 135;

  // 2) Print the incremented value of current_logged_in_user_count in printf statement
  //    in the printf call. While passing argument use the post increment operator of
  //    syntax variable++
  printf("current_logged_in_user_count post incremented is = %d\n", current_logged_in_user_count++);

  // 3) Print the value of current_logged_in_user_count without post increment once again
  //    observe see the difference between print in step 2) and step 3)
  printf("current_logged_in_user_count currently is = %d\n", current_logged_in_user_count);

  // 4) Reset the value of current_logged_in_user_count to 135,
  //    then print newly reset value of current_logged_in_user_count
  current_logged_in_user_count = 135;
  printf("\ncurrent_logged_in_user_count value reset to %d\n", current_logged_in_user_count);

  // 5) Print the incremented value of current_logged_in_user_count in printf statement
  //    in the printf call. While passing argument use the pre increment operator of
  //    syntax ++variable
  printf("\ncurrent_logged_in_user_count pre incremented is = %d\n", ++current_logged_in_user_count);

  // 6) Observe value 136 printed in step 5) and refer this back to tutorial if required
}
