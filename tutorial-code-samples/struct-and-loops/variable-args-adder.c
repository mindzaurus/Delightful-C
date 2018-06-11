
#include <stdio.h>
#include <stdarg.h> // va args needs this


long long int variable_args_adder( int number_of_arguments, ... )
{
  long long int accumulator = 0;
  int i = 0;

  va_list args;
  va_start(args, number_of_arguments);

  for ( i = 0; i < number_of_arguments; ++i)
  {
    int j = va_arg(args, int); // note second arg to va_arg is type information
    accumulator += j;
  }

  va_end(args);
  return accumulator;
}


int main()
{

  long long int acc = 0;

  // first arg is how many args we are passing, its 4 here for 7, 5, 4, 8
  acc = variable_args_adder(4,   7, 5, 4, 8);
  printf("7 + 5 + 4 + 8  %lld\n", acc);

  // first arg is how many args we are passing, its 6 here for 7, 5, 4, 8, 9, 7
  acc = variable_args_adder(6,   7, 5, 4, 8, 9, 7);
  printf("7 + 5 + 4 + 8 + 9 + 7 = %lld\n", acc);

  // You can pass any number of args to variable_args_adder
}












//
