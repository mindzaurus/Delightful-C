/*
  UNDERSTANDING POINTER DECLARATIONS - POINTERS STORE ADDRESSES

  1) Dereference the pointer pointer_to_current_value and print its value
     When you dereference the pointer you are going to read the value contained
     in the memory address pointed to by the pointer
     Since pointer_to_current_value points to memory address, where the value
     101254 is stored expect 101254 to be printed
  2) Print the address of the memory location that pointer_to_current_value points to
*/

#include <stdio.h>

int main()
{
  int current_value = 101254;

  int * pointer_to_current_value = NULL; // note the use of * after int

  // Assign the memory address of variable current_value
  // to the pointer_to_current_value
  pointer_to_current_value = &current_value;

  // 1) Dereference the pointer pointer_to_current_value and print its value
  //    When you dereference the pointer you are going to read the value contained
  //    in the memory address pointed to by the pointer
  //    Since pointer_to_current_value points to memory address, where the value
  //    101254 is stored expect 101254 to be printed


  // 2) Print the address of the memory location that pointer_to_current_value points to
  // Print the value of pointer_to_current_value this will be an address
  // use %p in printf to print address


  printf("\n\nMemory location %p contains value %d \n",
    pointer_to_current_value, *pointer_to_current_value);
}
