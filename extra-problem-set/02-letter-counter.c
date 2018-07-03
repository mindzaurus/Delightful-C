/*
  Write function
    int count_letter ( char * source_string, char interested_char)
    that returns how many number of times a interested_char occurs in source_string

    char * source_string    -   '\0' terminated C string
    char interested_char    -   The character which we should look for number of occurences in source_string

  LOGIC TO USE:
    Initialize a counter to 0
    Go through the string from start of string till you see char '\0'
      If the current char of string is same as interested_char then increment counter


  To compile and check your solution
    Implement function count_letter ( char * source_string, char interested_char)
    Then compile and run as follows
    gcc 02-letter-counter.c
    ./a.out

  To compile reference solution
    gcc 02-letter-counter.c -DUSE_REFERENCE_SOLUTION

  Expected answer is
  a occurs 4 times
*/

#include <stdio.h>

#if !defined(USE_REFERENCE_SOLUTION)

/*

  ADD
  YOUR
  SOLUTION
  HERE

*/

#else
// LOGIC TO USE:
//   Initialize a counter to 0
//   Go through the string from start of string till you see char '\0'
//     If the current char of string is same as interested_char then increment counter
int count_letter ( char * source_string, char interested_char)
{
  int counter = 0;
  int i = 0;

  while(source_string[i] != '\0')
  {
    if(source_string[i] == interested_char)
      counter++;

    i++; // move to next char
  }

  return counter;
}
#endif // #if !defined(USE_REFERENCE_SOLUTION)

int main()
{
  int r = count_letter("abce a mk a 45 a , !9s@", 'a');
  printf("a occurs %d times \n", r);
}
