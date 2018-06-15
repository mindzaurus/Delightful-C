
/*
  UNDERSTANDING VOID FUNCTIONS IN C - TAKE NONE, GIVE NONE MAKER
  1) Write a function give_and_take_none_maker which will take NO arguments and
     will return no value back.
  2) Function give_and_take_none_maker will just print the string
     "I am self contained and I give and take none"
  3) Call give_and_take_none_maker from the main function
*/

#include <stdio.h>


// 1) Write a function give_and_take_none_maker which will take NO arguments and
//    will return no value back.
void give_and_take_none_maker ( void ) // args is void and return type is void
{
  // 2) Function give_and_take_none_maker will just print the string
  //    "I am self contained and I give and take none"
  printf("I am self contained and I give and take none\n");
}

int main()
{
  // 3) Call give_and_take_none_maker from the main function
  give_and_take_none_maker();
}
