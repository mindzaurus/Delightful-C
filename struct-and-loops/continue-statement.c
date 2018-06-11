
#include <stdio.h>

void while_loop_continuer()
{
  int i = 0;

  while ( i <= 5 )
  {
    i++;
    if(i == 3)
    {
      continue;
    }
    printf("while loop i is %d\n", i);
  }
}

void do_while_loop_continuer()
{
  int i = 0;
  do {
    i++;
    if(i == 2) {
      continue;
    }
    printf("do while loop %d\n", i);

  } while( i  <= 5);
}

void for_loop_continuer()
{
  int i = -1;

  for( i = 0; i <= 5; i++)
  {
    if(i == 4) {
      continue;
    }
    printf("for loop i is %d\n", i);
  }
}

int main()
{
  while_loop_continuer();
  printf("\n");

  do_while_loop_continuer();
  printf("\n");
  
  for_loop_continuer();
}
