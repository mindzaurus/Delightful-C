/*
  UNDERSTANDING INITIALIZING ARRAY ELEMENTS -
    CURLY BRACES, ZERO INITIALIZATION, MEMSET INITIALIZATION
  1) Declare an long long int array containing 3 elements with values 12, 99, 891
     Hint: Use the curly braces initializer type { }, name array as brace_inited_array
  2) Declare a int array containing 3 elements with values 0 initialized using curly braces
     Use only one zero to initialize all 3 elements, name array as brace_zero_inited_array
  3) Declare a int array containing 3 elements, name array as memsetted_array
  4) Initialize memsetted_array with values initialized to 0xFA using memset
     Hint: use memset(array starting address, 0xFA, sizeof complete array elements in bytes)
  5) print all the values of brace_inited_array
  6) print all the values of brace_zero_inited_array
  7) print all the values of memsetted_array
*/

#include <stdio.h>
#include <string.h>

int main()
{
  // 1) Declare an long long int array containing 3 elements with values 12, 99, 891
  //    Hint: Use the curly braces initializer type { }, name array as brace_inited_array
  long long int brace_inited_array[3] = { 12, 99, 891 };

  // 2) Declare a int array containing 3 elements with values 0 initialized using curly braces
  //    Use only one zero to initialize all 3 elements, name array as brace_zero_inited_array
  int brace_zero_inited_array[3] = { 0 } ;

  // 3) Declare a int array containing 3 elements, name array as memsetted_array
  int memsetted_array[3];

  // 4) Initialize memsetted_array with values initialized to 0xFA using memset
  //    Hint: use memset(array starting address, 0xFA, sizeof complete array elements in bytes)
  memset(memsetted_array, 0xFA, sizeof(int) * 3);
  // memset(memsetted_array, 0xFA, sizeof(memsetted_array)); // also works
  // sizeof(int) * 3 == sizeof(memsetted_array)

  // 5) print all the values of brace_inited_array
  printf("brace_inited_array[0] = %lld, brace_inited_array[1] = %lld, brace_inited_array[2] = %lld \n",
        brace_inited_array[0], brace_inited_array[1], brace_inited_array[2]);

  // 6) print all the values of brace_zero_inited_array
  printf("brace_zero_inited_array[0] = %d, brace_zero_inited_array[1] = %d, brace_zero_inited_array[2] = %d \n",
        brace_zero_inited_array[0], brace_zero_inited_array[1], brace_zero_inited_array[2]);

  // 7) print all the values of memsetted_array
  printf("memsetted_array[0] = %x, memsetted_array[1] = %x, memsetted_array[2] = %x \n",
        memsetted_array[0], memsetted_array[1], memsetted_array[2]);
}
