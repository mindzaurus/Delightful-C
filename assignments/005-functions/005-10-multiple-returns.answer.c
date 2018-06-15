
/*
  UNDERSTANDING MULTIPLE RETURNS - FUNCTIONS CAN HAVE MULTIPLE RETURN  VALUES
  1) Write a function multiple_returns which returns int and takes no arguments
  2) Add a return statement which returns a value 3
  3) Add a printf which prints "after return 3"
  4) Add a return statement which returns a value 5
  5) Add a printf which prints "after return 5"
  6) Call multiple_returns from main
  7) Compile the program it should compile fine, don't run this program
     this program just shows having multiple return inside a function is fine
     We will be revisiting this this multiple return function again in 007-conditionals chapter
*/

#include <stdio.h>

//  1) Write a function multiple_returns which returns int and takes no arguments
int multiple_returns()
{
  // 2) Add a return statement which returns a value 3
  return 3;

  // 3) Add a printf which prints "after return 3"
  printf("after return 3\n");

  // 4) Add a return statement which returns a value 5
  return 5;

  // 5) Add a printf which prints "after return 5"
  printf("after return 5\n");
}

int main()
{
  // 6) Call multiple_returns from main
  multiple_returns();
}
