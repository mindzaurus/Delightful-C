/*
  UNDERSTANDING C BUILTIN STRING LIBRARY FUNCTIONS - STRLEN, STRCMP, STRCPY, STRDUP
  1) Declare a string s1 and initialize it to "icecream"
  2) Declare a string s1_clone and initialize it to "icecream"
  3) Declare a string s2 and initialize it to "The mouse ran up the clock"
  4) Declare char pointers s2_strcopied and s2_strduped initialize both to NULL

  5) Print string length of s1 and s1_clone using strlen, you should see 8 as length for both
  6) Print string length of s2 using strlen, you should see 26 as length
  7) Compare whether s1 and s1_clone are same using strcmp,
     you should see 0 returned meaning both are same
  8) Compare whether s1 and s2 are same using strcmp,
     you should see non zero value returned meaning both are different strings
  9) Allocate memory dynamically using malloc and store returned address in s2_strcopied
     the size allocated should be length of string s2 + 1 char for null terminator '\0'
 10) Use strcpy and copy s2 string to s2_strcopied
 11) Print the newly copied string s2_strcopied
 12) Print the memory addresses of s2 and s2_strcopied, they will be different
 13) Using strdup duplicate string s2 and store
     the newly allocated memory address in s2_strduped
 14) Print the strduped string s2_strduped
*/

/*
  You may see some typical output like this
  strlen(s1) = 8, strlen(s1_clone) = 8
  strlen(The mouse ran up the clock) = 26
  strcmp(s1, s1_clone) = 0
  strcmp(s1, s2) = 21
  s2_strcopied == The mouse ran up the clock
  string s2 is at memory location = 0x104426ea9
  string s2_strcopied is at memory location = 0x7fc2cc4027e0
  s2_strduped == The mouse ran up the clock
*/

#include <stdio.h>
#include <stdlib.h> // -> malloc, free
#include <string.h> // -> IMPORTANT HEADER FOR STRING FUNCTIONS

int main()
{
  // 1) Declare a string s1 and initialize it to "icecream"
  char * s1 = "icecream";

  // 2) Declare a string s1_clone and initialize it to "icecream"
  char * s1_clone = "icecream";

  // 3) Declare a string s2 and initialize it to "The mouse ran up the clock"
  char * s2 = "The mouse ran up the clock";

  // 4) Declare char pointers s2_strcopied and s2_strduped initialize both to NULL
  char * s2_strcopied = NULL;
  char * s2_strduped = NULL;

  // 5) Print string length of s1 and s1_clone using strlen, you should see 8 as length for both
  printf("strlen(s1) = %lu, strlen(s1_clone) = %lu \n", strlen(s1), strlen(s1_clone));

  // 6) Print string length of s2 using strlen, you should see 26 as length
  printf("strlen(%s) = %lu \n", s2, strlen(s2));

  // 7) Compare whether s1 and s1_clone are same using strcmp,
  //    you should see 0 returned meaning both are same
  printf("strcmp(s1, s1_clone) = %d \n", strcmp(s1, s1_clone));

  // 8) Compare whether s1 and s2 are same using strcmp,
  //    you should see non zero value returned meaning both are different strings
  printf("strcmp(s1, s2) = %d \n", strcmp(s1, s2));

  // 9) Allocate memory dynamically using malloc and store returned address in s2_strcopied
  //    the size allocated should be length of string s2 + 1 char for null terminator '\0'
  s2_strcopied = (char *) malloc( strlen(s2) + 1); // +1 for null terminator

  // 10) Use strcpy and copy s2 string to s2_strcopied
  strcpy(s2_strcopied, s2);

  // 11) Print the newly copied string s2_strcopied
  printf("s2_strcopied == %s \n", s2_strcopied);

  // 12) Print the memory addresses of s2 and s2_strcopied, they will be different
  printf("string s2 is at memory location = %p \n", s2);
  printf("string s2_strcopied is at memory location = %p \n", s2_strcopied);

  // 13) Using strdup duplicate string s2 and store
  //     the newly allocated memory address in s2_strduped
  s2_strduped = strdup(s2);

  // 14) Print the strduped string s2_strduped
  printf("s2_strduped == %s \n", s2_strduped);
}
