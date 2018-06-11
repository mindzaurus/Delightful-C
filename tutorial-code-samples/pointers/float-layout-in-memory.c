
#include <stdio.h>

void print_float_layout_in_memory()
{
  float float_value = 3.14159f;
  printf("float_value take %lu bytes to store a value \n", sizeof(float));

  float * address = &float_value;
  printf("Address of float_value is %p and contains value %f \n\n",
    address, *address);

  unsigned char * byte_ptr = (unsigned char *) address;

  printf("Value at memory address (byte_ptr+0) %p *(byte_ptr+0) %d\n",
    (byte_ptr+0), *(byte_ptr+0));

  printf("Value at memory address (byte_ptr+1) %p *(byte_ptr+1) %d\n",
    (byte_ptr+1), *(byte_ptr+1));

  printf("Value at memory address (byte_ptr+2) %p *(byte_ptr+2) %d\n",
    (byte_ptr+2), *(byte_ptr+2));

  printf("Value at memory address (byte_ptr+3) %p *(byte_ptr+3) %d\n",
    (byte_ptr+3), *(byte_ptr+3));
}

int main()
{
  print_float_layout_in_memory();
}
