
#include <stdio.h>

int is_divisible_by_5_simple ( int x )
{
  int is_divisible = -1;

  if( x % 5 == 0) // using modulo operator
  {
    is_divisible = 1; // yes divisible by 5
  }
  else
  {
    is_divisible = 0; // no not divisible by 5
  }

  return is_divisible;
}

int is_divisible_by_5_ternary_version1 ( int x )
{
  int is_divisible =
                      (x % 5 == 0) // is x divisible by 5 ?
                        ? 1        // if true set value to 1
                        : 0 ;      // else set value to 0
  return is_divisible;
}

// function in one line
int is_divisible_by_5_ternary_version2 ( int x ) { return(x % 5 == 0) ? 1 : 0 ; /* see how short this version is */ }

int main()
{
  printf("simple: is 55 divisible by 5 = %d \n", is_divisible_by_5_simple(55) );
  printf("simple: is 36 divisible by 5 = %d \n\n", is_divisible_by_5_simple(36) );

  printf("ternary v1: is 55 divisible by 5 = %d \n", is_divisible_by_5_ternary_version1(55) );
  printf("ternary v1: is 36 divisible by 5 = %d \n\n", is_divisible_by_5_ternary_version1(36) );

  printf("ternary v2: is 55 divisible by 5 = %d \n", is_divisible_by_5_ternary_version2(55) );
  printf("ternary v2: is 36 divisible by 5 = %d \n", is_divisible_by_5_ternary_version2(36) );
}
