#include <stdio.h>

int main()
{
  int age;
  int * age_ptr;

  printf("variable age has an address %p \n", &age);

  printf("pointer variable age_ptr has an address too %p \n\n", &age_ptr);

  age = 45;
  printf("\nage is assigned a value %d \n", age);

  age_ptr = &age;
  printf("age_ptr is assigned the address of memory location age %p \n", age_ptr);
}
