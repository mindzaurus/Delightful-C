// 42 8, 77 10
// 77 11, 24 8

#include <stdio.h>

int main()
{
  int i = -1;

  i = 42 % 8;
  printf("42 modulo 8 is = %d \n", i);

  i = 77 % 10;
  printf("77 modulo 10 is = %d \n", i);

  i = 77 % 11;
  printf("77 modulo 11 is = %d \n", i);

  i = 24 % 8;
  printf("24 modulo 8 is = %d \n", i);
}
