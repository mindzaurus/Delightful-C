
#include <stdlib.h>
#include <stdio.h>

#define SIZEOF_INT (sizeof(int))

int main()

{
  // let us allocate space for one int
  int * int_ptr = 0;
  printf("int_ptr before allocation %p \n", int_ptr);


  // malloc allocated memory comes from the HEAP
  int_ptr = (int *) malloc ( sizeof(int) );
  printf("int_ptr after allocation %p \n", int_ptr);
  if(!int_ptr) // malloc returns NULL if not able to allocate
    return -1;

  *int_ptr = 78;
  printf("Newly allocated memory contains %d now \n", *int_ptr);

  // we will allocate space for 3 ints
  int_ptr = (int *) malloc ( SIZEOF_INT * 3 );
  printf("\nint_ptr after allocation for 3 ints %p \n", int_ptr);

  // Let us write values into the three int memory locations
  // The values will be 91, 100003, 499000

  *(int_ptr + 0) = 91;
  *(int_ptr + 1) = 100003;
  *(int_ptr + 2) = 499000;

  printf("int1 %d, int2 %d, int3 %d \n",
    *(int_ptr + 0), *(int_ptr + 1), *(int_ptr + 2));
  // we will see this ptr + offset in some later videos

  #define ONE_MILLION (100000 * 10)

  // We will allocate space for a million ints ;-)
  int_ptr = (int *) malloc ( SIZEOF_INT * ONE_MILLION );
  printf("\nint_ptr after allocation for a million ints %p \n", int_ptr);

  // we will write to the millionth element's memory location
  // we will write the value 556677 there inside it
  *(int_ptr + (ONE_MILLION -1) ) = 556677;

  printf("one millionth int element's memory location contains %d \n",
    *(int_ptr + (ONE_MILLION -1) ));

  // why not write to ONE_MILLION offset itself ?
  // What we did is wrong we shouldn't be doing this at allocate
  // We just wrote outside the bounds of memory region what we allocated
  *(int_ptr + ONE_MILLION) = 556677;
  printf("\n*(int_ptr + ONE_MILLION) element's memory location contains %d \n",
    *(int_ptr + ONE_MILLION));

  // in pointer arithmetic and later videos we will see this
}










//
