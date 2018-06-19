/*
  UNDERSTANDING POINTER DECLARATIONS - POINTERS STORE ADDRESSES

  1) Inside main function declare a int variable current_value and assign 65535 to the variable
  2) Declare a pointer to int type and name the pointer variable as pointer_to_current_value
     assign a value of NULL
  3) Assign the address of int variable current_value to the pointer_to_current_value
  4) Print the value of pointer_to_current_value this will be an address use %p in printf
*/

#include <stdio.h>

int main()
{
  // 1) Inside main function declare a int variable current_value
  //    and assign 65535 to the variable
  int current_value = 65535;

  // 2) Declare a pointer to int type and name
  //    the pointer variable as pointer_to_current_value then
  //    assign a value of NULL to pointer_to_current_value
  int * pointer_to_current_value = NULL; // note the use of * after int

  // 3) Assign the memory address of variable current_value
  //    to the pointer_to_current_value
  pointer_to_current_value = &current_value;

  // 4) Print the value of pointer_to_current_value this will be an address
  //    use %p in printf to print address
  printf("pointer_to_current_value is %p \n", pointer_to_current_value);
}
