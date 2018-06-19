/*
  UNDERSTANDING MULTI LEVEL POINTERS
  1) Inside main function declare a variable value_x of type int and assign a value of 2955;
  2) Declare a pointer to int variable with name pointer_to_value_x and assign the address of
     variable value_x's memory location
  3) Declare a pointer to pointer of type ** int (two level pointer) with name
     pointer_to_pointer_of_value_x and assign the address of pointer_to_value_x's memory location
  4) By doing two level of dereferencing using ** on pointer_to_pointer_of_value_x
     print the value. The value printed should be 2955
*/

#include <stdio.h>

int main()
{
  // 1) Inside main function declare a variable value_x of type int and assign a value of 2955;
  int value_x = 2955;

  // 2) Declare a pointer to int variable with name pointer_to_value_x and assign the address of
  //    variable value_x's memory location
  int * pointer_to_value_x = &value_x;

  // 3) Declare a pointer to pointer of type ** int (two level pointer) with name
  //    pointer_to_pointer_of_value_x and assign the address of pointer_to_value_x's memory location
  int ** pointer_to_pointer_of_value_x = &pointer_to_value_x;

  // 4) By doing two level of dereferencing using ** on pointer_to_pointer_of_value_x
  //    print the value. The value printed should be 2955
  printf("Two level dereferenced value is %d \n", **pointer_to_pointer_of_value_x);
}

//
