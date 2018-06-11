// We will show why a void * pointer is generic
// and nice to have
// In this version binary-ops-caller-1.c
// We will show some problems using non void * pointers
// for generic type programming

#include <stdio.h>
#include <stdlib.h>

typedef int (*BINARY_OPS) (int *a, int *b);

int int_add(int * a, int * b)
{
  int r = *a + *b;
  printf("int_add r is %d \n", r);
  return *a + *b;
}

double double_add(double * a, double * b)
{
  double r = *a + *b;
  printf("double_add r is %lf \n", r);
  return *a + *b;
}

// this function is not generic enough because it
// has type specific pointers we need a generic pointer type
// to solve this problem
// We will fix this in binary-ops-generic.c program next

void binary_ops_caller(BINARY_OPS fn_ptr, int *x, int *y)
{
  int r = fn_ptr(x, y);
}

int main()
{
  int a = 30, b = 39;
  int  (*int_add_ptr) (int * a, int * b);
  int_add_ptr = int_add;
  binary_ops_caller(int_add_ptr, &a, &b);

  double c = 33.14, d = 89.399;
  double (*double_add_ptr) (double * a, double *b);
  double_add_ptr = double_add;
  binary_ops_caller(double_add_ptr, &c, &d);


}
