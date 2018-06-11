
#include <stdio.h>


// add is a binary operation function
int add(int a, int b)
{
  return a + b;
}

// multiply is a binary operation function
int multiply(int a, int b)
{
  return a * b;
}

int main()
{
  int r = -1 ; // result

  int // return type
    ( *binary_operation_function_pointer ) // add parenthesis, then *, then variable name
    (int a, int b); // arguments should match pointed function

  // we will do addition using function pointer
  binary_operation_function_pointer = &add; // point to the addition function
  r = binary_operation_function_pointer(22, 39);

  printf("binary_operation_function_pointer(22, 39) result is %d \n", r);


  // we will do multiplication using function pointer
  binary_operation_function_pointer = &multiply; // point to the multiplication function
  r = binary_operation_function_pointer(22, 39);

  printf("binary_operation_function_pointer(22, 39) result is %d \n", r);
}
