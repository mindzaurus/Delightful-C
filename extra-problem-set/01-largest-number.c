/*

  Write a function
    int get_largest_number (int number_list[], int number_of_elements)
  that returns the largest number found in the array
  int number_list[]         -  An array containing a list of numbers
  int number_of_elements    -  The number of elements present in the array

  LOGIC TO USE:
    Set a reference variable to lowest int value
    Go through all the elements of the array
      if you find an element of array higher than the reference variable
        then set the higher valued array element's value as reference variable's value

  To compile and check your solution
    Implement function int get_largest_number (int number_list[], int number_of_elements)
    Then compile and run as follows
    gcc 01-largest-number.c
    ./a.out


  To compile reference solution
    gcc 01-largest-number.c -DUSE_REFERENCE_SOLUTION


  Expected answer is
  Largest number in array ar1 973812
  Largest number in array ar2 1231

*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


#if !defined(USE_REFERENCE_SOLUTION)
/*

  ADD
  YOUR
  SOLUTION
  HERE

*/

#else
// REFERENCE SOLUTION:
// LOGIC TO USE:
//   Set a reference variable to lowest int value
//   Go through all the elements of the array
//     if you find an element of array higher than the reference variable
//       then set the higher valued array element's value as reference variable's value
int get_largest_number (int number_list[], int number_of_elements)
{
  int r = INT_MIN;
  for(int i=0; i<number_of_elements; i++)
  {
    if(number_list[i] > r)
      r = number_list[i];
  }
  return r;
}
#endif // #if !defined(USE_REFERENCE_SOLUTION)

int main()
{
  int ar1[6] = {-4, 38291, 973812, -281, 22, 282777 };
  int ar2[6] = {2, 1231, 400, -399, 322, 981 };
  printf("Largest number in array ar1 %d \n", get_largest_number(ar1, 6) );
  printf("Largest number in array ar2 %d \n", get_largest_number(ar2, 6) );
}
