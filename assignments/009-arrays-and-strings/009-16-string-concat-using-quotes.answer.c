/*
  UNDERSTANDING C STRING CONCATENATION USING DOUBLE QUOTES -
    USING DOUBLE QUOTES "" AND GENERATING COMPILER CONCATENATED STRINGS

  1) Declare a string s1 "EATING GOOD FOOD IS FUN"
  2) Declare a string s2 which has two parts quoted as
     "EATING GOOD"  and  " FOOD IS FUN"
     These two parts should be concatenated by the compiler into a single string
  3) Print string s1 output should be "EATING GOOD FOOD IS FUN"
  4) Print string s2 output should be "EATING GOOD FOOD IS FUN"
*/

#include <stdio.h>

int main()
{
  // 1) Declare a string s1 "EATING GOOD FOOD IS FUN"
  char * s1 = "EATING GOOD FOOD IS FUN";

  // 2) Declare a string s2 which has two parts quoted as
  //    "EATING GOOD"  and  " FOOD IS FUN"
  //    These two parts should be concatenated by the compiler into a single string
  char * s2 = "EATING GOOD"   " FOOD IS FUN";

  // 3) Print string s1 output should be "EATING GOOD FOOD IS FUN"
  printf("s1 == %s \n", s1);

  // 4) Print string s2 output should be "EATING GOOD FOOD IS FUN"
  printf("s2 == %s \n", s2);
}
