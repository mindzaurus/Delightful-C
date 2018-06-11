
#include <stdio.h>

int add_using_call_by_value(int a, int b)
{
  return a + b;
}

int add_using_call_by_reference(int * a, int * b)
{
  return *a + *b;
}

int call_by_value()
{
  int a = 50, b = 60;
  return add_using_call_by_value(a, b);
}

int call_by_reference()
{
  int a = 50, b = 60;
  return add_using_call_by_reference(&a, &b);
}

int main()
{
  printf("call_by_value() returned %d \n", call_by_value());
  printf("call_by_reference() returned %d \n", call_by_reference());
}
