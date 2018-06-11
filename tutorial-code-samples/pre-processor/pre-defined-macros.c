
#include <stdio.h>

#define PRINT_SRC_LOCATION_INFO \
        printf(" function %s in file %s at line number %d was run on date %s at time %s\n", \
        __FUNCTION__, __FILE__, __LINE__, __DATE__, __TIME__)


void function_mickey_mouse()
{
  PRINT_SRC_LOCATION_INFO;
}

void function_donald_duck()
{
  PRINT_SRC_LOCATION_INFO;
}

int main()
{
  PRINT_SRC_LOCATION_INFO;
  function_mickey_mouse();
  function_donald_duck();
}
