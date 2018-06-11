
#include <stdio.h>

void equality_checks( int x )
{
  printf("Testing x %d \n", x);

  if ( x == 5 )
  {
    printf("Yes x is equal to 5 \n");
  }
  else
  {
    printf("No x is not equal to 5 \n");
  }


  if ( x != 6 )
  {
    printf("Yes x is not equal to 6 \n");
  }
  else
  {
    printf("No x is equal to 6 \n");
  }
}

int main()
{
  equality_checks(5);
  printf("\n\n");
  equality_checks(6);
}
