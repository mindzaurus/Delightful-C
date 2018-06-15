
/*
  UNDERSTANDING FUNCTIONS IN C - THE PLUS ONE FUNCTION

  1) Write a function the_plus_one_maker which will take one argument of
     type int and variable name val This function will return a value
     which is one higher than the val passed to it
  2) Call the function the_plus_one_maker from main and store the returned value in
     a variable plus_one of type int. The value to pass can be of your choice
     The returned value will be one higher than what you passed
     e.g if you pass 5 you should get 6 back
  3) Print the value of variable plus_one
*/

#include <stdio.h>

// 1) Write a function the_plus_one_maker which will take one argument of
//    type int and variable name val This function will return a value
//    which is one higher than the val passed to it
int the_plus_one_maker(int val)
{
  int result = val + 1;
  return result;
}

int main()
{
  // 2) Call the function the_plus_one_maker from main and store the returned value in
  //    a variable plus_one of type int. The value to pass can be of your choice
  //    The returned value will be one higher than what you passed
  int plus_one = the_plus_one_maker(5);

  // 3) Print the value of variable plus_one
  printf("plus_one is = %d\n", plus_one);
}
