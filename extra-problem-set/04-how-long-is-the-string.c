/*
  Write a function
  int get_length_of_string(char * str)
  that returns the length of a c style char string written in pure ENGLISH
  Don't use strlen or inbuilt library functions

  LOGIC TO USE:
    From the beginning of the string till you see a '\0' keep counting
    number of chars by incrementing a counter
*/


char * STR_01 = "Blueberry and Cheese cake";
char * STR_02 = "The Eiffel tower is in France";

#include <stdio.h>


#if !defined(USE_REFERENCE_SOLUTION)

/*

  ADD
  YOUR
  SOLUTION
  HERE

*/

#else

// Choose loop based solution
#define get_length_of_string get_length_of_string_looped

// Choose recursion based solution
// #define get_length_of_string get_length_of_string_recursive

int get_length_of_string_looped(char * str)
{
  int l = 0;
  while(*str != '\0')
  {
    l++;
    str++;
  }
  return l;
}

int get_length_of_string_recursive(char * str)
{
  return (*str == '\0') ? 0 : (get_length_of_string(str+1) + 1);
}

#endif // #if !defined(USE_REFERENCE_SOLUTION)

int main()
{
  printf("length of STR_01 %d\n", get_length_of_string(STR_01));
  printf("length of STR_02 %d\n", get_length_of_string(STR_02));
}
