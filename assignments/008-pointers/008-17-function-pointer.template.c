/*
  UNDERSTANDING FUNCTION POINTERS - THE INCREMENTORS FUNCTION

                                        PART 1
  1) Write a function increment_by_two which will take an argument x and increment
     x by 2 and return the value. "int increment_by_two(int x)" will be the signature
  2) Write a function increment_by_three which will take an argument x and increment
     x by 3 and return the value. "int increment_by_three(int x)" will be the signature
  3) Inside main declare a typedef to function pointer which will take an int argument and will return
     an int value. Name this typedef as INCREMENT_FUNCTION_POINTER
  4) Declare a function pointer of type INCREMENT_FUNCTION_POINTER. Name this function pointer
     variable as if_ptr which stands for increment function pointer

                                        PART 2
  5) Declare an int ret which will store the return value returned from increment functions,
     initialize this to 0
  6) Assign if_ptr the address of memory location which points to increment_by_two
  7) Call the if_ptr function pointer with a value of 11 and store return value in ret
  8) Print the return value stored in ret, this should be 13

                                        PART 3
  9) Assign if_ptr the address of memory location which points to increment_by_three
 10) Call the if_ptr function pointer with a value of 11 and store return value in ret
 11) Print the return value stored in ret, this should be 14
*/

#include <stdio.h>

//                                      PART 1
// 1) Write a function increment_by_two which will take an argument x and increment
//    x by 2 and return the value. "int increment_by_two(int x)" will be the signature


// 2) Write a function increment_by_three which will take an argument x and increment
//    x by 3 and return the value. "int increment_by_three(int x)" will be the signature


int main()
{

  //                                      PART 2

  // 3) Inside main declare a typedef to function pointer which will take an int argument and will return
  //    an int value. Name this typedef as INCREMENT_FUNCTION_POINTER


  // 4) Declare a function pointer of type INCREMENT_FUNCTION_POINTER. Name this function pointer
  //    variable as if_ptr which stands for increment function pointer


  // 5) Declare an int ret which will store the return value returned from increment functions,
  //    initialize this to 0

  // 6) Assign if_ptr the address of memory location which points to increment_by_two


  // 7) Call the if_ptr function pointer with a value of 11 and store return value in ret


  // 8) Print the return value stored in ret, this should be 13



  //                                      PART 3
  // 9) Assign if_ptr the address of memory location which points to increment_by_three


  // 10) Call the if_ptr function pointer with a value of 11 and store return value in ret


  // 11) Print the return value stored in ret, this should be 14

}
