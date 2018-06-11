
// #ifndef is the opposite of #ifdef
// code is selected for compilation if the flag is not defined

#ifndef DISABLE_DEBUG_PRINT_MSGS
#include <stdio.h>
#endif

int main()
{
  #ifndef DISABLE_DEBUG_PRINT_MSGS
  printf("Entered main function \n");
  #endif
}
