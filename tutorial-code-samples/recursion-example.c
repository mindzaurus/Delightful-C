
#include <stdio.h>

void print_till_number ( int number )
{

  if( number <= 0) // terminal condition met for recursion, no more recursion
    return;

  print_till_number( number - 1 ); // actual recursive call calling itself

  printf("%d\n", number); // Action to be done after returning from a previous recursive call

}

int main()
{
  print_till_number (5);
  printf("\n\n");
  print_till_number(10);
}
