
#include <stdio.h>
#include <string.h>

void initialize_all_elements()
{
  //int intarray[5] = { -22, 0, 59, 23900, 654982};
  // no array size mentioned note the missing 5
  int intarray[ ] = { -22, 0, 59, 23900, 654982};

  printf("\nValues set for all elements %d, %d, %d, %d, %d \n",
    intarray[0], intarray[1], intarray[2], intarray[3], intarray[4]);
}

void zero_initialize_all_elements()
{
  int intarray[5] = { 0 };

  printf("\nAll values set to zero for all elements %d, %d, %d, %d, %d \n",
    intarray[0], intarray[1], intarray[2], intarray[3], intarray[4]);
}

#if 0
SYNOPSIS
     #include <string.h>

     void *
     memset(void *b, int c, size_t len);

DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
#endif

void memset_initialize_all_elements()
{
  int intarray[5];
  memset(&intarray[0], 0xBA, sizeof(int) * 5); // ignoring return value
  printf("\nmemset bytewise to \"BA\"  %x, %x, %x, %x, %x \n",
    intarray[0], intarray[1], intarray[2], intarray[3], intarray[4]);
}


int main()
{
  initialize_all_elements();
  zero_initialize_all_elements();
  memset_initialize_all_elements();
}
