
#include <stdio.h>
#include <stdlib.h> // malloc

#define SIZEOF_INT (sizeof(int))
#define NUM_ELEMENTS (5)

int main()
{
  int intarray[5];
  int * intptr = NULL;

  intptr = (int *) malloc(SIZEOF_INT * NUM_ELEMENTS);
  intptr[0] = 592;

  printf("intptr[0] %d \n", intptr[0]);

  *(intarray+0) = -997;
  printf("*(intarray+0) is %d\n", *(intarray+0));

  *(intarray+2) = 1002;
  printf("*(intarray+2) is %d\n", *(intarray+2));

  intarray[3] = 72;
  printf("*(intarray+3) is %d\n", *(intarray+3));

  // We will check the address using pointer + offset notation
  // and pointer[offset] notation as well

  printf("\n\n (intptr+0) %p &intptr[0] %p intptr %p\n", // first element address
    (intptr+0), &intptr[0], intptr); // all these in this line are the same address
  printf(" (intptr+4) %p &intptr[4] %p\n", // last element address
    (intptr+4), &intptr[4]); // all these in this line are the same address

  printf("\n\n (intarray+0) %p &intarray[0] %p intarray %p\n", // first element address
    (intarray+0), &intarray[0], intarray); // all these in this line are the same address
  printf(" (intarray+4) %p &intarray[4] %p\n", // last element address
    (intarray+4), &intarray[4]); // all these in this line are the same address

  // Some difference between array and pointer is there
  // watch this
  intptr++;
  intptr--;
  intptr += 2;
  intptr -= 2;

#ifdef TEST_CHANGE_ARRAYS_ADDRESS
  // we will try pointer arithmetic on intarray and change the address its holding
  intarray++;
  intarray--;
  intarray += 2;
  intarray -= 2;
#endif
}










//

















//
