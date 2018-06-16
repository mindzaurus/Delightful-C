/*
    UNDERSTANDING GLOBAL VARIABLES - GLOBALS ARE CELEBRITIES CAN BE SEEN FROM ANYWHERE

    1) Declare a int variable current_global_value and assign a value of 10
       This variable shouldn't be inside any function
    2) Increment the value of current_global_value by 1 from inside the main function
    3) Print the value from inside current_global_value from inside the main function
    4) Write a function global_var_incrementer which takes no arguments and returns no value
    5) From inside the global_var_incrementer function increment variable global_var_incrementer
    6) Print the value from inside current_global_value from inside the global_var_incrementer function
    7) Call the global_var_incrementer from inside the main function

    This program will help you understand
      how to declare a global variable and initialize it then
      how to use global variables from inside any function
*/

/*
  Program output can look like This

  Print from main current_global_value = 11
  Print from global_var_incrementer current_global_value = 12
*/

#include <stdio.h>

void global_var_incrementer();

// 1) Declare a int variable current_global_value and assign a value of 10
//    This variable shouldn't be inside any function
int current_global_value = 10;

int main()
{
  // 2) Increment the value of current_global_value by 1 from inside the main function
  current_global_value++; // global variable is visible here

  // 3) Print the value from inside current_global_value from inside the main function
  printf("Print from main current_global_value = %d\n", current_global_value);

  // Implement steps 4) , 5) , 6) and then implement step 7) mentioned below
  // 7) Call the global_var_incrementer from inside the main function
  global_var_incrementer();
}

// 4) Write a function global_var_incrementer which takes no arguments and returns no value
//    From inside the global_var_incrementer function increment variable global_var_incrementer
void global_var_incrementer()
{
  // 5) From inside the global_var_incrementer function increment variable global_var_incrementer
  current_global_value++; // global variable is visible here

  // 6) Print the value from inside current_global_value from inside the global_var_incrementer function
  printf("Print from global_var_incrementer current_global_value = %d\n", current_global_value);
}
