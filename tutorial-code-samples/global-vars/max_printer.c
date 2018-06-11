
#include <stdio.h>

extern int max_limit;  // don't initialize anything

void print_max_limit()
{
  printf("max_limit is = %d \n", max_limit);
  max_limit += 2;
}
