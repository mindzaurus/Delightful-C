
#include <stdio.h>

#include <math.h>

float we_shall_divide_floats( float numerator, float denominator )
{
  float result = 0;

  if( denominator == 0 ) // equality check note this is == not =
  {
    return INFINITY;
  }

  result = numerator / denominator;
  return result;
}

int main()
{
  float result = 0;

  result = we_shall_divide_floats(2.0, 0.0);
  printf(" 2.0 divided by 0.0 is %f \n\n", result);

  result = we_shall_divide_floats(5.0, 2.0);
  printf(" 5.0 divided by 2.0 is %f \n\n", result);
}
