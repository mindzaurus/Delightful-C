#include <stdio.h>

#include <stdlib.h> // has NULL, malloc function etc ...

int initialized_age = 55; // initialized at compile time
int uninitialized_age; // initialized only at runtime

void example_pointer_function_one( int * uninitialized_age_ptr )
{
  int late_age = 95;
  int * int_ptr = NULL; // infamous NULL pointer initialization / assignment

  int_ptr = uninitialized_age_ptr; // assign / copy another pointer

  // this is dynamically allocated pointer from heap at runtime
  int * allocated_pointer = (int *) malloc (sizeof(int));

  int * global_age_ptr = &initialized_age; // assign address of global variable

  int * local_age_ptr = &late_age; // assign address of local variable

  printf("allocated_pointer (heap mem area) %p \n\n"
         "global_age_ptr (initialized_age .data mem area) %p \n\n"
         "local_age_ptr (&late_age local stack mem area) %p \n\n\n",
        allocated_pointer, global_age_ptr, local_age_ptr);
}

void example_pointer_function_two()
{
  // from shared libs mem region
  void * malloc_function_ptr = &malloc;

  // should be .bss (block start by symbol)
  int * age_ptr = &uninitialized_age;

  // from .text region
  void * example_pointer_function_one_ptr = &example_pointer_function_one;

  printf("malloc_function_ptr (shared libs mem area) %p \n\n"
         "age_ptr (uninitialized_age bss mem area) %p \n\n"
         "example_pointer_function_one_ptr (.text area) %p \n\n",
        malloc_function_ptr, age_ptr, example_pointer_function_one_ptr);
}

int main()
{
  uninitialized_age = 33;
  example_pointer_function_one(&uninitialized_age);
  example_pointer_function_two();
}
