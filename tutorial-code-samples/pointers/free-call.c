
#include <stdlib.h>
#include <stdio.h>

int age = 23;

int main()
{
  int * ptr = NULL;

  ptr = (int *) malloc(sizeof(int));
  printf("Allocated pointer %p \n", ptr);

  printf("About to free pointer %p \n", ptr);
  // just pass the allocated ptr as arg to free

  // do this check to see ptr is not NULL as follows
  // safety check - if(ptr)
  if(ptr) // don't free NULL pointers thats wrong too
    free(ptr);  // no return value

  // second free is wrong free only once an allocated pointer
  // free(ptr); // second free call also known as double free

  ptr = NULL; // after free do this too
}
