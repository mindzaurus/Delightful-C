
#include <stdio.h>

// define printf to nothing these calls will undefined
#define printf


// 1) Write code
// 2) Check whether desired output is obtained
// 3) If not add printfs intermediate stages and check where its going wrong
// 4) Finally remove printfs

// we will introduce some compilation error
int
add_two_integers (int x , int y )
{
  int z = x + y;
  return z;
}

int main()
{
  int r = add_two_integers(40, 50); // expecting r to be 50
  printf("r = %d\n", r);
}
