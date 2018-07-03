/*
  Write a function
    void getupper_cased(char * str)
    that returns the string str which contains all its characters converted to upper case
    for e.g when input "movies and popcorn" is given
    the input string should be converted to "MOVIES AND POPCORN"

  LOGIC TO USE:
    #include <ctype.h>
    Use toupper builtin function
*/

#include <stdio.h>
#include <ctype.h>

#if !defined(USE_REFERENCE_SOLUTION)
/*

  ADD
  YOUR
  SOLUTION
  HERE

*/
#else

void getupper_cased(char * str)
{
  while( *str != '\0' )
  {
    *str = toupper(*str);
    str++;
  }
}
#endif // #if !defined(USE_REFERENCE_SOLUTION)

int main()
{
  char str_01[] = "movies and popcorn";

  getupper_cased(str_01);
  printf("%s\n", str_01);
}
