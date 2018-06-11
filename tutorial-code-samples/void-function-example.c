
#include <stdio.h>

// some people write return type first and then the function name
// as below
// even arguments in function on a new line

void
who_is_after_whom(
  char c1, 
  char c2)
{
  printf("%c is after %c \n", c2, c1);
}

int main()
{
  who_is_after_whom('a', 'b');
  who_is_after_whom('1', '2');
}
