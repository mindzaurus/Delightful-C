/*
  UNDERSTANDING POINTER DECLARATIONS - USE POINTER TO WRITE TO MEMORY LOCATIONS

  1) Inside main declare a variable of type float called pi_val
     and DON'T initialize this variable to any value
  2) Declare a pointer to float data type and name the pointer variable as
     pointer_to_pi_val asign the pointer_to_pi_val a value of NULL
  3) Assign the pointer_to_pi_val address of variable pi_val's memory location
  4) By dereferencing the pointer_to_pi_val write a value of 3.14 to the memory
     location pointed to by the pointer_to_pi_val
  5) Print the value of the variable pi_val, use %f in printf for printing float
     value should be 3.14
*/

#include <stdio.h>

int main()
{
  // 1) Inside main declare a variable of type float called pi_val
  //    and DON'T initialize this variable to any value
  float pi_val;

  // 2) Declare a pointer to float type and name the pointer variable as
  //    pointer_to_pi_val asign the pointer_to_pi_val a value of NULL
  float * pointer_to_pi_val = NULL;

  // 3) Assign the pointer_to_pi_val address of variable pi_val's memory location
  pointer_to_pi_val = &pi_val;

  // 4) By dereferencing the pointer_to_pi_val write a value of 3.14 to the memory
  //    location pointed to by the pointer_to_pi_val
  *pointer_to_pi_val = 3.14; // note the * used to dereference the pointer

  // 5) Print the value of the variable pi_val
  // We didn't use the variable pi_val to write any values to it but still
  // we managed to write the memory location of pi_val directly using a pointer
  // value should be 3.14
  printf("pi_val was set to %f \n", pi_val);

}
