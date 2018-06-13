
/*
  This program will

  1) set variable integer_max_value to maximum int value and print it
  2) set variable float_max_value to maximum float value and print it
*/

// Refer to tutorial "HOW DO I FIND MAX, MIN VALUES FOR A DATA TYPE?"

#include <limits.h>
#include <float.h>
#include <stdio.h>

int main()
{
    // 1) set variable integer_max_value to maximum int
    int integer_max_value = INT_MAX;
    // 2) set variable float_max_value to maximum float value
    float float_max_value = FLT_MAX;

    printf("integer_max_value is set to = %d\n", integer_max_value);
    printf("float_max_value is set to = %f\n", float_max_value);
}
