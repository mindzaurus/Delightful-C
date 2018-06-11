
#include <stdio.h>

int main( int argc,         // Number of arguments passed to this program
          char * argv [ ] ) // Array of char pointers containing argument strings
{
  printf("\nargv [0]: First argument '%s' \n", argv[0]);

  if(argc >=2 )
  {
    printf("argv [1]: Second argument '%s' \n", argv[1]);
  }

  if(argc >=3 )
  {
    printf("argv [2]: Third argument '%s' \n", argv[2]);
  }

  if(argc >=4 )
  {
    printf("argv [3]: Fourth argument '%s' \n", argv[3]);
  }

}
