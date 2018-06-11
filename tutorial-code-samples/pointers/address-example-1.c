
// We will look at what are memory locations

#include <stdio.h>


int main()
{
  // 25 is the value, variable age is actually a identifier for some memory location
  unsigned char age = 25;

  unsigned char * memory_address;

  // let us grab the memory address of the variable age
  // the & operator here gets the memory address which the variable age represents or
  // symbolically refers to
  memory_address = &age;

  printf("Variable age's memory address %p \n", memory_address);

  printf("Reading values from memory address %p finds %d inside it \n",
          memory_address, *memory_address);

  // *memory_address means read the contents from the memory location
  // memory_address means just means the address not the contents inside it
}
