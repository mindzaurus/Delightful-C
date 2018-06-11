
#include <stdio.h>


void increment_memory_content_by_three( unsigned int * ptr)
{
  *ptr = *ptr + 3;
}

unsigned int old_age = 90;

int main()
{
  printf("old_age before increment %u \n", old_age);
  increment_memory_content_by_three (&old_age);
  printf("old_age after increment %u \n", old_age);
}
