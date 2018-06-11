
#include <stdio.h>

int main()
{
  int Z = 3 + 4 * 5;
  printf("Z evaluates to %d \n", Z);

  // we will change order of precedence by adding a paranthesis
  Z = (3 + 4) * 5;
  printf("After adding paranthesis Z evaluates to %d \n", Z);
}
