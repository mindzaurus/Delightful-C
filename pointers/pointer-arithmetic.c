#include <stdio.h>
#include <stdlib.h>


struct T1
{
  char a[21];
  int k;
};


// don't worry about void * we will deal with it later
// don't worry about this function either
int get_byte_offset_difference(void * p1, void * p2)
{
  unsigned long long v1 = ( unsigned long long ) p1;
  unsigned long long v2 = ( unsigned long long ) p2;

  return v2 - v1;
}

void print_pointer_arithmetic_info()
{
  int d = 0;

  unsigned char * cp = NULL;
  d = get_byte_offset_difference(cp, (cp+1));
  printf("unsigned char * byte offset difference for +1 offset %d \n", d);

  unsigned int * uip = NULL;
  d = get_byte_offset_difference(uip, (uip+1));
  printf("unsigned int * byte offset difference for +1 offset %d \n", d);

  unsigned long long * ullp = NULL;
  d = get_byte_offset_difference(ullp, (ullp+1));
  printf("unsigned long long * byte offset difference for +1 offset %d \n", d);

  double * dp = NULL;
  d = get_byte_offset_difference(dp, (dp+1));
  printf("double * byte offset difference for +1 offset %d \n", d);

  struct T1 * t1p = NULL;
  d = get_byte_offset_difference(t1p, (t1p+1));
  printf("\nstruct T1 * byte offset difference for +1 offset %d \n", d);
}


int main()
{
  print_pointer_arithmetic_info();
}
