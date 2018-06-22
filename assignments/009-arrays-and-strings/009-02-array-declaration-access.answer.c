/*
  UNDERSTANDING ARRAY DECLARATION AND ARRAY INDEXES - [] usage and array subscripts / indexes
  1) Declare an array of 3 int elements and name this array as array_of_ints
  2) Set the value of first element as 23, second element as -99 and third element as 967758
  3) Print the first and last element values contained in the array
*/

#include <stdio.h>

int main()
{
  // 1) Declare an array of 3 int elements and name this array as array_of_ints
  int array_of_ints [ 3 ];

  // 2) Set the value of first element as 23, second element as -99 and third element as 967758
  array_of_ints[0] = 23;        // FIRST ELEMENT STARTS AT INDEX 0
  array_of_ints[1] = -99;
  array_of_ints[2] = 967758;    // ARRAY OF N ELEMENTS HAS LAST ELEMENT AT INDEX N - 1

  // 3) Print the first and last element values contained in the array
  printf("first element array_of_ints[0]  = %d \nlast element array_of_ints[2] = %d\n",
        array_of_ints[0], array_of_ints[2]);
}
