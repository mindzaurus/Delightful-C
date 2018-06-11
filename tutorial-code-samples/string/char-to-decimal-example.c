
#include <stdio.h>

int main()
{
  // char is signed
  {
    char char_notation_A = 'A'; // method 1
    printf("char \'A\' assignment %c == %d \n",
      char_notation_A, char_notation_A);
  }

  {
    char decimal_A = 65; // method 2 line number 7 and 13 are equivalent
    printf("decimal value 65 assignment %c == %d\n",
      decimal_A, decimal_A);
  }

  {
    signed char null_teriminator = '\0'; // this null termination character
    printf("null_teriminator \'%c\' == %d \n",
      null_teriminator, null_teriminator);
  }
}
