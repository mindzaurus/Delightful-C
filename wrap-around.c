

#include <stdio.h>

#include <limits.h>
#include <float.h>

int main()
{
  long long int lli = LONG_MAX;
  unsigned long long int ulli = ULONG_MAX;

  float flt = FLT_MAX;
  double dbl = DBL_MAX;

  printf("Before incrementing long long int %lld \n", lli);
  printf("Before incrementing unsigned long long int %llu \n", ulli);

  printf("Before incrementing float %f \n", flt);
  printf("Before incrementing double %lf \n\n", dbl);



  printf("After incrementing long long int %lld \n", lli+1);
  printf("After incrementing unsigned long long int %llu \n", ulli+1);

  printf("After incrementing float %f \n", flt+1);
  printf("After incrementing double %lf \n", dbl+1);
  
}
