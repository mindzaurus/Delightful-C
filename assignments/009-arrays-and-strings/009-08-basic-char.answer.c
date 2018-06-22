/*
  UNDERSTANDING CHAR DATA TYPE USED IN STRINGS - INSPECTING THE DECIMAL VALUES OF CHARACTERS

  1) Declare a char c1 and initialize it to 'A', use single quoted A
  2) Declare a char c2 and initialize it to 'Z', use single quoted Z
  3) Declare a char c3 and initialize it to '\0',
     use single quoted back slash \ followed by a 0 (zero character)
  4) Print c1 using format specifiers %c, %d, %x
  5) Print c2 using format specifiers %c, %d, %x
  6) Print c3 using format specifiers %c, %d, %x

  You can also see manual page by typing 'man ascii' and print your favourite characters
*/

#include <stdio.h>

int main()
{

  // 1) Declare a char c1 and initialize it to 'A', use single quoted A
  char c1 = 'A';

  // 2) Declare a char c2 and initialize it to 'Z', use single quoted Z
  char c2 = 'Z';

  // 3) Declare a char c3 and initialize it to '\0',
  //    use single quoted back slash \ followed by a 0 (zero character)
  char c3 = '\0';

  // 4) Print c1 using format specifiers %c, %d, %x
  printf("c1 == %c , %d, %x \n", c1, c1, c1);

  // 5) Print c2 using format specifiers %c, %d, %x
  printf("c2 == %c , %d, %x \n", c2, c2, c2);

  // 6) Print c3 using format specifiers %c, %d, %x
  // null terminator won't be printed
  printf("c3 == %c , %d, %x \n", c3, c3, c3);

}
