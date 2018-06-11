#include <stdio.h>
#include <math.h>

int main()
{
  /*
  double
  exp(double x);

  double
  log(double x);
  */

  double x = 2.0;
  double y = 5.0;

  double z = pow(x, y);
  printf("pow(2.0, 5.0) is = %f \n", z);

  x = 225.0;
  z = sqrt(x);
  printf("sqrt(225.0) is = %f \n", z);

  x = 4.0;
  z = exp(x);
  printf("exp(4.0) is = %f \n", z);

  z = log(x);
  printf("log(4.0) is = %f \n", z);
}
