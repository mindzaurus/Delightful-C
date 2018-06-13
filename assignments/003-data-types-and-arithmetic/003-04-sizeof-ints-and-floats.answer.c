
/*
  This program will
  1) print the size of int
  2) print the size of long long int
  3) print the size of float
  4) print the size of double

*/
#include <stdio.h>

int main()
{
  // 1) get the size of int
  int size_of_int = sizeof(int);
  // 2) get the size of long long int
  int size_of_long_long_int = sizeof(long long int);
  // 3) get the size of float
  int size_of_float = sizeof(float);
  // 4) get the size of double
  int size_of_double = sizeof(double);


  printf("sizeof int is = %d \n", size_of_int);
  printf("sizeof int is = %d \n", size_of_long_long_int);
  printf("sizeof int is = %d \n", size_of_float);
  printf("sizeof int is = %d \n", size_of_double);
}
