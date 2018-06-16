/*
  UNDERSTANDING IF ELSE STATEMENT IN C - ZERO DETECTOR FUNCTION

  1) Write a function zero_detector, which will take one int argument x
     and will not return any value
  2) In function zero_detector, if x is equal to zero print "zero detected"
  3) else print "non zero value detected"
  4) From main function call zero_detector with value 0
  5) From main function call zero_detector with value 1
  6) From main function call zero_detector with value -3
*/


/*
  Output should be
  zero detected
  non zero value detected
  non zero value detected
*/

#include <stdio.h>

// 1) Write a function zero_detector, which will take one int argument x
//    and will not return any value
void zero_detector ( int x )
{ // Begin Function zero_detector

  // 2) if x is equal to zero print "zero detected"
  if(x == 0)
  {
    printf("zero detected\n");
  }
  else // 3) else print "non zero value detected"
  {
    printf("non zero value detected\n");
  }

} // End Function zero_detector

int main()
{
  // 4) From main function call zero_detector with value 0
  zero_detector(0);

  // 5) From main function call zero_detector with value 1
  zero_detector(1);

  // 6) From main function call zero_detector with value -3
  zero_detector(-3);
}
