
#include <stdio.h>

void function_for_loop_1()
{
  int i = -1, M = 0;

  for(i=0; i <= 5; i++)
  {
    printf("M is %d i is %d\n", M, i);
    M += 2;
  }
}

void function_for_loop_2()
{
  int i= -1 , M = 0;

  i = 0;
  for( /* MISSING */; i <= 5; /* MISSING */ )
  {
    printf("M is %d i is %d\n", M, i);
    M += 2;

    { // START: compiler will insert this block in function_for_loop_1
      i++; // in function function_for_loop_1 compiler inserts this block
    } // END: compiler will insert this block in function_for_loop_1
  }

}

int main()
{
  function_for_loop_1();
  printf("\n\n");
  function_for_loop_2();
}
