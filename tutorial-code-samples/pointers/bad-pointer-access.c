
#include <stdlib.h> // NULL comes from here
#include <stdio.h>

unsigned int old_age = 23;

int main()
{
  // unsigned int * ptr = &old_age;

  unsigned int * ptr = (unsigned int *) 0xabcdef12;
  *ptr += 3;

  //printf("Reading pointer ptr %u \n", *ptr);

}
