
#include <stdio.h>
#include <stdlib.h>

int binops_count = 0;

typedef void * (*BINARY_OPS) (void *a, void *b);

void * binary_ops_caller(BINARY_OPS fn_ptr, void *a, void *b)
{
  binops_count++;
  void * r = fn_ptr(a, b);
  return r;
}

void * int_add(void * a, void * b)
{
  int * r = malloc(sizeof(int));
  // ignore safety checks for this demo
  *r = *(int *) a + *(int *)b;
  printf("int_add *r is %d \n", *r);
  return r;
}

void * double_add(void * a, void * b)
{
  double * r = malloc(sizeof(double));
  // ignore safety checks for this demo
  *r = *(double *) a + *(double *)b;
  printf("double_add *r is %lf \n", *r);
  return r;
}

int main()
{
  int a = 35, b = 93;
  BINARY_OPS fp1; // function pointer 1
  fp1 = &int_add;
  binary_ops_caller(fp1, &a, &b);

  double c = 939.937, d = 22328.2629;
  BINARY_OPS fp2; // function pointer 2
  fp2 = &double_add;
  binary_ops_caller(fp2, &c, &d);

  printf("Total number of binary operations called = %d \n",
    binops_count);
}
