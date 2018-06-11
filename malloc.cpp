#include <stdio.h>
#include <stdlib.h>

#define ONE_MB (1024*1024)

int main()
{
  char * buffer = (char *) malloc(ONE_MB);
  if(buffer) {
    printf("We just allocated one MB of memory \n");
    free(buffer);
  }
  else
    printf("Oops no memory allocated \n");
}
