
/*
  UNDERSTANDING FUNCTIONS IN C - THE AVERAGE MAKER
  1) Write a function average_maker which will take 4 arguments v1, v2, v3, v4
     of type float and return average of these values as a float
  2) Function average_maker will first add sum of v1, v2, v3, v4 together
  3) Function average_maker will return the sum after dividing it by 4.0, return
     type will be of type float
  4) Call average_maker with 4 arguments 1.2, 2.378, 3.875, 6.517 from the
     main function will call and store result in a variable called average
  5) Print the value of the variable average
*/

#include <stdio.h>

// 1) Write a function average_maker which will take 4 arguments v1, v2, v3, v4
//    of type float and return average of these values as a float

float average_maker ( float v1, float v2, float v3, float v4 )
{
  // 2) Function average_maker will first add sum of v1, v2, v3, v4 together
  float sum = v1 + v2 + v3 + v4;

  // 3) Function average_maker will return the sum after dividing it by 4.0, return
  //    type will be of type float
  sum = sum / 4.0;

  return sum;
}

int main()
{
  // 4) Call average_maker with 4 arguments 1.2, 2.378, 3.875, 6.517 from the
  //    main function will call and store result in a variable called average
  float average = average_maker(1.2, 2.378, 3.875, 6.517);

  // 5) Print the value of the variable average, it should be 3.492500
  printf("average is = %f\n", average);
}
