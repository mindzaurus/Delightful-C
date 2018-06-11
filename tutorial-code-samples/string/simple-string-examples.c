

#include <stdio.h>

int main()
{
  {
    char * char_pointer_charlie = "charlie";
    char simple_char_array_charlie [ ] = "charlie";

    printf("char_pointer_charlie %s\n", char_pointer_charlie);
    printf("simple_char_array_charlie %s\n", simple_char_array_charlie);
  }

  {
    char decimal_char_array_charlie [ ] =
    {
      99, 104, 97, 114, 108, 105, 101
      , 0 // NULL teriminator
    };
    printf("\ndecimal_char_array_charlie %s\n", decimal_char_array_charlie);
  }

  {
    char decimal_char_array_charlie [ 8 ] = // 7 + 1 (null terminator)
    {
      99, 104, 97, 114, 108, 105, 101
      , 0 // NULL teriminator
    };
    printf("\ndecimal_char_array_charlie line 30: %s\n",
    decimal_char_array_charlie);
  }

  {
    // both strings s1 and s2 are equivalent
    // compiler changes next line to char s1 [ ] = "charlie bit my finger";
    char s1 [ ] = "charlie " "bit my " "finger"; // string broken into 3 parts
    char s2 [ ] = "charlie bit my finger"; // string mentioned as single part

    printf("\ns1 %s\n", s1);
    printf("s2 %s\n", s2);
  }
}












//
