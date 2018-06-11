

#include <stdio.h>


void while_break_loop()
{
  int i = 0;
  while ( i <= 5 )
  {
    printf("while loop i is %d\n", i);
    i++;

    if ( i == 3 )
    {
      break;
    }
  }
}

void do_while_break_loop()
{
  int i = 0;

  do {
    printf("do while is is %d\n", i);
    i++;

    if(i == 3)
    {
      break;
    }

  } while ( i <= 5 );
}

void for_break_loop()
{
  int i = -1;
  for( i = 0; i <= 5; i++)
  {
    printf("for loop i is %d\n", i);

    if(i == 3)
    {
      break;
    }
  }
}

int main()
{
  while_break_loop();
  printf("\n");

  do_while_break_loop();
  printf("\n");

  for_break_loop();
  printf("\n");
}
