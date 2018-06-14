/*
  This program will

  1) declare a int variable mxint and set it to its max value,
  2) also declare another variable tmp_int and set it to 0
  3) declare a char variable mxchar and set it to its max value,
  4) also declare another variable tmp_char and set it to 0

  5) assign the value of mxchar to tmp_int and print the value
     this is an example of widening conversion you will observe no loss
  6) assign the value of mxint to tmp_char and print the value
     this is an example of narrowing conversion, you will observe value loss
*/

#include <stdio.h>
#include <limits.h>

int main()
{
  // 1) declare a int variable mxint and set it to its max value
  int mxint = INT_MAX;
  // 2) also declare another variable tmp_int and set it to 0
  int tmp_int = 0;
  // 3) declare a char variable mxchar and set it to its max value
  char mxchar = CHAR_MAX;
  // 4) also declare another variable tmp_char and set it to 0
  char tmp_char = 0;


  // Widening conversion no loss
  // 5) assign the value of mxchar to tmp_int and print the value of tmp_int
  tmp_int = mxchar;
  printf(" tmp_int is = %d \n", tmp_int);

  // Narrowing conversion original value will be lost
  // 6) assign the value of mxint to tmp_char and print the value of tmp_char
  tmp_char = mxint;
  printf(" tmp_char is = %d \n", tmp_char);
}
