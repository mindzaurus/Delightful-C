
#include <stdio.h>

#include <limits.h>
#include <float.h>

int main()
{
  long long int lli = LONG_MAX, tlli = 0;
  unsigned long long int ulli = ULONG_MAX, tulli = 0;

  int i = INT_MAX, ti = 0;
  unsigned int ui = UINT_MAX, tui = 0;

  float flt = FLT_MAX, tf = 0.0;
  double dbl = DBL_MAX, tdbl = 0.0;

  // narrowing
  {
    // convert unsigned long long int to long long int
    //tlli = ulli - 5;
    //printf("unsigned long long int %llu became %lld after conversion to long long int \n", ulli, tlli);

    // convert long long int to int
    // ti = lli;
    // printf("long long int %llu became %d after conversion to int \n", lli, ti);

    // convert double to float
    //tf = dbl;
    //printf("double %lf became %f after conversion to float \n", dbl, tf);

  }

  // widening
  {
    // convert long long int to unsigned long long int
    // tulli = lli;
    // printf("long long int %lld became %llu after conversion to unsigned long long int \n", lli, tulli);

    // convert int to long long
    // tlli = i;
    // printf("int %d became %llu after conversion to long long int \n", i, tlli);

    // convert float to double
    // tdbl = flt;
    // printf("flt %f became %lf after conversion to double \n", flt, tdbl);
  }



  // SAFE NARROWING
  {
    // convert unsigned long long int to long long int
    // tlli = ulli = 67898 ;
    // printf("unsigned long long int %llu became %lld after conversion to long long int \n", ulli, tlli);

    // convert long long int to int
    // ti = lli = 32735;
    // printf("long long int %llu became %d after conversion to int \n", lli, ti);

    // convert double to float
    //tf = dbl = 6474.3637;
    //printf("double %lf became %f after conversion to float \n", dbl, tf);

  }


}
