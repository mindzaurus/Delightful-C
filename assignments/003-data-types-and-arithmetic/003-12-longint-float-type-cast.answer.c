
/*
  UNDERSTANDING TYPE CASTING IN DATA TYPES OF C

  This program will

  1) Declare a long int variable distance_from_earth_to_moon to 238855
  2) Declare a long int variable tmp_longint and set it to 0
  3) Declare a float variable bernoulli_number_n20 to −529.1242424
  4) Declare a float variable tmp_float and set it to 0

  5) typecast distance_from_earth_to_moon to float and assign the value to tmp_float
  6) print tmp_float as float value
  7) typecast bernoulli_number_n20 to long int and assign the value to tmp_longint
  8) print tmp_longint as long int

*/

#include <stdio.h>

int main()
{
  // 1) Declare a long int variable distance_from_earth_to_moon to 238855
  long int distance_from_earth_to_moon = 238855;

  // 2) Declare a long int variable tmp_longint and set it to 0
  long int tmp_longint = 0;

  // 3) Declare a float variable bernoulli_number_n20 to -529.1242424
  float bernoulli_number_n20 = -529.1242424;

  // 4) Declare a float variable tmp_float and set it to 0
  float tmp_float = 0;

  // 5) typecast distance_from_earth_to_moon to float and assign the value to tmp_float
  tmp_float = (float) distance_from_earth_to_moon;

  // 6) print tmp_float as float value
  printf("tmp_float is = %f\n", tmp_float);

  // 7) typecast bernoulli_number_n20 to long int and assign the value to tmp_longint
  tmp_longint = (long int) bernoulli_number_n20;

  // 8) print tmp_longint as long int
  printf("tmp_longint is = %ld\n", tmp_longint);
}

// Additional references
// https://en.wikipedia.org/wiki/Bernoulli_number
// https://spaceplace.nasa.gov/moon-distance/en
