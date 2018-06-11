#include <stdio.h>

// Let us see how integers are represented
// in memory as continuous / contiguous bytes

void print_integer_layout_in_memory()
{
  unsigned int int_value = 88776655;
  printf("int_value take %lu bytes to store a value \n", sizeof(unsigned int));

  unsigned int * address = &int_value;
  printf("Address of int_value is %p and contains value %d \n\n",
    address, *address);

  unsigned char * byte_ptr = (unsigned char *) address;

  printf("Value at memory address (byte_ptr+0) %p *(byte_ptr+0) %d \n",
    (byte_ptr+0), *(byte_ptr+0));

  printf("Value at memory address (byte_ptr+1) %p *(byte_ptr+1) %d \n",
    (byte_ptr+1), *(byte_ptr+1));

  printf("Value at memory address (byte_ptr+2) %p *(byte_ptr+2) %d \n",
    (byte_ptr+2), *(byte_ptr+2));

  printf("Value at memory address (byte_ptr+3) %p *(byte_ptr+3) %d \n",
    (byte_ptr+3), *(byte_ptr+3));
}

int main()
{
  print_integer_layout_in_memory();
}
