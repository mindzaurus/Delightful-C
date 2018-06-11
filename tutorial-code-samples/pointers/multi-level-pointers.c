
#include <stdio.h>
#include <stdlib.h>


void two_level_pointers()
{
  int i1 = 450;
  int * p2 = &i1;
  int ** p1 = &p2;

  printf("**p1 is %d \n", **p1);
}

void three_level_pointers()
{
  int i1 = 723;
  int * p3 = &i1;
  int ** p2 = &p3;
  int *** p1 = &p2;

  printf("***p1 is %d \n", ***p1);
}

int main()
{
  two_level_pointers();
  three_level_pointers();
}
