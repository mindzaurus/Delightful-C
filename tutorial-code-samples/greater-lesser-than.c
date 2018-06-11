
#include <stdio.h>

// > 55
// < 2

void greater_lesser_than_checks(int x)
{
  printf("Checking %d \n", x);
  if ( x > 55 )
  {
    printf(" x is greater than 55 \n");
  }
  else
  {
    printf(" x is lesser than 55 or equal to 55 \n");
  }


  if ( x < 2 )
  {
    printf(" x is lesser than 2 \n");
  }
  else
  {
    printf(" x is greater than 2 or equal to 2 \n");
  }
  printf("\n\n");
}

int main()
{
  greater_lesser_than_checks(54);
  greater_lesser_than_checks(55);
  greater_lesser_than_checks(56);

  greater_lesser_than_checks(1);
  greater_lesser_than_checks(2);
  greater_lesser_than_checks(3);
}
