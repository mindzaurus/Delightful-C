
/*
  UNDERSTANDING VARIABLES IN C
  This Program won't compile

  Use this template to complete this exercise

  1) Declare a int variable temp_integer_variable and assign a value of 829203
  2) print the value of temp_integer_variable in hex
  3) Observe the address of the variable printed in hex when you run the program
*/

#include <stdio.h>

int main()
{
  // 1) Declare a int variable temp_integer_variable and assign a value of 829203

  // 2) print the value of temp_integer_variable in hex
  // use the correct print function and also NOTE 0X  below
  ("temp_integer_variable in decimal is = %d \n", temp_integer_variable);
  ("temp_integer_variable in hexadecimal is = 0x%x \n", temp_integer_variable);

  // 3) Observe the address of the variable printed in hex
  // You don't have to write any code for this, notice %p in printf
  // when you run the program, notice the value printed
  printf("Address of temp_integer_variable %p \n", &temp_integer_variable);
}
