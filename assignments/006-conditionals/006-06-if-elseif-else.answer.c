/*
  UNDERSTANDING IF ELSE STATEMENT IN C - RANGE DETECTOR FUNCTION

  1) Write a function range_detector, which will take one int argument x
     and will not return any value
  2) In function range_detector,
     if x is between 1 to 5 then print "x range in between 1 to 5"
  3) else if x is between 6 to 10 then print "x range in between 6 to 10"
  4) else if x is between 11 to 15 then print "x range in between 11 to 15"
  5) else print "x is beyond our range detection"
  6) From main function call range_detector with value 2
  7) From main function call range_detector with value 9
  8) From main function call range_detector with value 13
  9) From main function call range_detector with value 20
*/

#include <stdio.h>

// 1) Write a function range_detector, which will take one int argument x
//    and will not return any value
void range_detector ( int x )
{
  // 2) In function range_detector,
  //    if x is between 1 to 5 then print "x range in between 1 to 5"
  if ( x >= 1 && x <= 5 )
  {
    printf("x range in between 1 to 5\n");
  }
  else if ( x >= 6 && x <= 10 ) // 3) else if x is between 6 to 10 then print "x range in between 6 to 10"
  {
    printf("x range in between 6 to 10\n");
  }
  else if ( x >= 11 && x <= 15 ) // 4) else if x is between 11 to 15 then print "x range in between 11 to 15"
  {
    printf("x range in between 11 to 15\n");
  }
  else // 5) else print "x is beyond our range detection"
  {
    printf("x is beyond our range detection\n");
  }

}

int main()
{
  // 6) From main function call range_detector with value 2
  range_detector(2);

  // 7) From main function call range_detector with value 9
  range_detector(9);

  // 8) From main function call range_detector with value 13
  range_detector(13);

  // 9) From main function call range_detector with value 20
  range_detector(20);

}


//
