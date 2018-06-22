/*
  UNDERSTANDING STRING DECLARATIONS - STRING DECLARATIONS USING POINTERS AND ARRAYS

  1) Declare a string using a char * pointer style to create string "sky"
     name the pointer as str_ptr
  2) Declare a string using a array [ ] style to create string "fog"
     name the array as str_arr
  3) Print the complete string str_ptr use %s in printf
  4) Print the complete string str_arr use %s in printf
  5) Print all the characters using pointer dereferencing of str_ptr
  6) Print all the characters using array indexing of str_arr
*/

#include <stdio.h>

int main()
{
  // 1) Declare a string using a char * pointer style to create string "sky"
  //    name the pointer as str_ptr
  char * str_ptr = "sky";

  // 2) Declare a string using a array [ ] style to create string "fog"
  //    name the array as str_arr
  char str_arr [ ] = "fog"; // note missing array size inside [ ]

  // 3) Print the complete string str_ptr use %s in printf
  printf("str_ptr == %s \n", str_ptr);

  // 4) Print the complete string str_arr use %s in printf
  printf("str_arr == %s \n", str_arr);

  // 5) Print all the characters using pointer dereferencing of str_ptr
  printf("All 3 chars of str_ptr == %c,%c,%c \n", *(str_ptr+0), *(str_ptr+1), *(str_ptr+2) );

  // 6) Print all the characters using array indexing of str_arr
  printf("All 3 chars of str_arr == %c,%c,%c \n", str_arr[0], str_arr[1], str_arr[2] );
}
