#include <stdio.h>

void constant_values_demo1()
{
  int days_per_week = 7;
  printf("days_per_week %d\n", ++days_per_week);
}

/*
  'const int days_per_week'
          and
  'int const days_per_week'

  are the same declaration it makes a variable's value immutable (unmodifiable)
*/

void constant_values_demo2()
{
  // add a const before the type
  const int days_per_week = 7;
  printf("days_per_week %d\n", ++days_per_week);
}

// Same idea but a different flavour of declaration
void constant_values_demo3()
{
  // add a const after the type
  int const days_per_week = 7;
  printf("days_per_week %d\n", ++days_per_week);
}

int main()
{
  constant_values_demo3();
}
