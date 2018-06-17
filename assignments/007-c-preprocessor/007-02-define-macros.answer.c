
/*
  UNDERSTANDING DEFINE MACROS IN PRE PROCESSOR - DOUBLER, QUARTER AND TWICE MACROS
  1) Write a #define macro to define value 2 as TWICE
  2) Write a #define macro DOUBLER which take an argument x and multiply x by TWICE
  3) Write a #define macro QUARTER which take an argument x and divide x by 4
  4) print the value of TWICE as an integer
  5) print the doubled value of 10 using the DOUBLER macro defined
  6) print the one-fourth fraction value of 100 using the QUARTER macro defined
*/

#include <stdio.h>

// 1) Write a #define macro to define value 2 as TWICE
#define TWICE 2

// 2) Write a #define macro which take an argument x and multiply x by TWICE
#define DOUBLER(x) ( x * TWICE )

// 3) Write a #define macro QUARTER which take an argument x and divide x by 4
#define QUARTER(x) ( x / 4)

int main()
{

  // 4) print the value of TWICE as an integer
  printf("TWICE is = %d\n", TWICE);

  // 5) print the doubled value of 10 using the DOUBLER macro defined
  printf("DOUBLER(10) is = %d\n", DOUBLER(10));

  // 6) print the one-fourth fraction value of 100 using the QUARTER macro defined
  printf("QUARTER(100) is = %d\n", QUARTER(100));
}


//
