/*
  UNDERSTANDING CONST DATA TYPE - PROTECTING ADDRESSES AND PROTECTING MEMORY LOCATIONS
  1) Declare a int variable value and initialize it to 33
  2) Declare a pointer cvp1 which stops the derefernced value of the pointer value from being modified
     initialize the pointer with the address of variable value
     Use const datatype * style declaration
  3) Declare a pointer cvp2 which stops the derefernced value of the pointer value from being modified
     initialize the pointer with the address of variable value
     Use datatype const * style declaration
  4) Declare a pointer cvp3 which stops the address of the pointer value from being modified
     initialize the pointer with the address of variable value
  5) Declare a pointer cvp4 which stops the derefernced value of the pointer value from being modified
     Also stop the address of the pointer value from being modified
     initialize the pointer with the address of variable value
     Use datatype const * data_type const var style declaration
  6) Try to write new value 445 to memory location pointed by cvp1, by dereferencing the pointer
     Compile the program you will get some error like "error: read-only variable is not assignable"
     Comment the line we added now that tries to write new value 445 to memory location pointed by cvp1
  7) Try to write new value -86 to memory location pointed by cvp2, by dereferencing the pointer
     Compile the program you will get some error like "error: read-only variable is not assignable"
     Comment the line we added now that tries to write new value -86 to memory location pointed by cvp2
  8) Increment address pointed by pointer cvp3 by doing cvp3++,
     Compile program you will get some error like
     "error: cannot assign to variable 'cvp3' with const-qualified type"
     Comment the line we added now that tries to increment address pointed by pointer cvp3
  9) Try to write new value -112 to memory location pointed by cvp4, by dereferencing the pointer
     Compile the program you will get some error like "error: read-only variable is not assignable"
     Comment the line we added now that tries to write new value -112 to memory location pointed by cvp4
 10) Increment address pointed by pointer cvp4 by doing cvp4++,
     Compile program you will get some error like
     "error: cannot assign to variable 'cvp4' with const-qualified type"
     Comment the line we added now that tries to increment address pointed by pointer cvp4
  */

#include <stdio.h>

int main()
{
  // 1) Declare a int variable value and initialize it to 33
  int value = 33;

  // 2) Declare a pointer cvp1 which stops the address stored in the pointer value from being modified
  //    initialize the pointer with the address of variable value
  //    Use const datatype * style declaration
  const int * cvp1 = &value;

  // 3) Declare a pointer cvp2 which stops the address stored in the pointer value from being modified
  //    initialize the pointer with the address of variable value
  //    Use datatype const * style declaration
  int const * cvp2 = &value;

  // 4) Declare a pointer cvp3 which stops the address of the pointer value from being modified
  //    initialize the pointer with the address of variable value
  int * const cvp3 = &value;

  // 5) Declare a pointer cvp4 which stops the derefernced value of the pointer value from being modified
  //    Also stop the address of the pointer value from being modified
  //    initialize the pointer with the address of variable value
  //    Use datatype const * data_type const var style declaration
  const int * const cvp4 = &value;

  // 6) Try to write new value 445 to memory location pointed by cvp1, by dereferencing the pointer
  //    Compile the program you will get some error like "error: read-only variable is not assignable"
  //    Comment the line we added now that tries to write new value 445 to memory location pointed by cvp1

  // *cvp1 = 445 ;//&value;


  // 7) Try to write new value -86 to memory location pointed by cvp2, by dereferencing the pointer
  //    Compile the program you will get some error like "error: read-only variable is not assignable"
  //    Comment the line we added now that tries to write new value -86 to memory location pointed by cvp2

  // *cvp2 = -86;


  // 8) Increment address pointed by pointer cvp3 by doing cvp3++,
  //    Compile program you will get some error like
  //    "error: cannot assign to variable 'cvp3' with const-qualified type"
  //    Comment the line we added now that tries to increment address pointed by pointer cvp3

  // cvp3++;


  // 9) Try to write new value -112 to memory location pointed by cvp4, by dereferencing the pointer
  //    Compile the program you will get some error like "error: read-only variable is not assignable"
  //    Comment the line we added now that tries to write new value -112 to memory location pointed by cvp4

  // *cvp4 = -112;


  // 10) Increment address pointed by pointer cvp4 by doing cvp4++,
  //     Compile program you will get some error like
  //     "error: cannot assign to variable 'cvp4' with const-qualified type"
  //     Comment the line we added now that tries to increment address pointed by pointer cvp4
  
  // cvp4++;
}
