
#include <stdio.h>

#include "addition.h"

int main()
{
  int z = add_two_int(3, 4);
  printf("z is = %d \n", z);

  float k = add_two_float(4.39, 67.265);
  printf("k is %f \n", k);
}
