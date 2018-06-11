
#include <stdio.h>


int add_two_integers(int x, int y)
{
  int z = x + y;
  printf("z is now set to %d \n", z);

  return z;
}

int add_two_integers_no_print(int x, int y)
{
  int z = x + y;
  return z;
}


int main()
{
  // we want to add 5 different sets of numbers together
  // 4 and 5, 3 and 9, 10 and 11, 33 and 91, 1024 and 100
  // We also want to print the output value of all of them

  add_two_integers(4, 5);
  add_two_integers(9, 10);
  add_two_integers(10, 11);
  add_two_integers(33, 91);
  add_two_integers(1024, 100);

  int Y = add_two_integers_no_print(10, 20); // this is not printed
  printf("Y became %d \n", Y);
}
