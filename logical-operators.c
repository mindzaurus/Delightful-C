
#include <stdio.h>
#include <math.h>

void AND_relational_operator_function(int min, int max, int actual_value)
{
  if(actual_value >= min && actual_value <= max)
    printf("AND The value %d is within range\n", actual_value);
  else
    printf("AND The value %d is out of range\n", actual_value);
}

void OR_relational_operator_function(int min, int max, int actual_value)
{
  if(actual_value < min || actual_value > max)
    printf("OR value %d is out of range \n", actual_value);
  else
    printf("OR value %d is within of range \n", actual_value);
}

void NOT_OR_relational_operator_function(int min, int max, int actual_value)
{
  if( !(actual_value < min || actual_value > max))
    printf("OR value %d is within range \n", actual_value);
  else
    printf("OR value %d is out of range \n", actual_value);
}

int main()
{
  AND_relational_operator_function( 1, 100, 23);
  AND_relational_operator_function( 1, 100, 101);
  AND_relational_operator_function( 1, 100, 0);
  printf("\n");

  OR_relational_operator_function (1, 100, 23);
  OR_relational_operator_function (1, 100, 101);
  OR_relational_operator_function (1, 100, 0);
  printf("\n");

  int k = 10;

  if( (k > 2 && k % 5 ==0) || ((k % 2 == 0) && (k % 10 == 0)) )
    printf("k is either >2 and multiple of 5 or k is even or multiple of 10\n");

  printf("\n");
  NOT_OR_relational_operator_function (1, 100, 23);
  NOT_OR_relational_operator_function (1, 100, 101);
  NOT_OR_relational_operator_function (1, 100, 0);
}





//
