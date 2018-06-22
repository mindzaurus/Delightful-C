/*
  UNDERSTANDING DYNAMIC MEMORY ALLOCATION FOR STRINGS - MALLOC AND NULL TERMINATOR

  1) Dynamically allocate memory for string "gem", use char * pointer named str_ptr
     length of string "gem" will be 3 + 1 char for null terminator '\0' so allocate 4 chars
  2) set the characters of string using array notation for 3 chars g,e,m and fourth character
     you set should be a null terminator '\0'
  3) Print the dynamically created allocated and set string using printf and %s format specifier
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // 1) Dynamically allocate memory for string "gem", use char * pointer named str_ptr
  //    length of string "gem" will be 3 + 1 char for null terminator '\0' so allocate 4 chars
  char * str_ptr = (char *) malloc (4);

  // 2) set the characters of string using array notation for 3 chars g,e,m and fourth character
  //    you set should be a null terminator '\0'
  str_ptr[0] = 'g';
  str_ptr[1] = 'e';
  str_ptr[2] = 'm';
  str_ptr[3] = '\0';

  // 3) Print the dynamically created allocated and set string using printf and %s format specifier
  printf("str_ptr == %s \n", str_ptr);
}
