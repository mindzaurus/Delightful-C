
#include <stdio.h>

int main()
{
  int i = 0, j = 5;

  do
  { // do while code block starts here
    printf("i is %d\n", i);
    i++;
  } // do while code block starts here
  while ( i<= 5); // if this condition is true go back to execute do while code block again

  // j is 5 now
  do
  {
    printf("j is %d\n", j);
  }
  while ( j != 5 ); // this condition is false always

}
