/*
  UNDERSTANDING DYNAMIC MEMORY - ALLOCATING MEMORY USING MALLOC AND RELEASING USING FREE

                                        // PART 1
  1) Write a function addition_using_memory_locations which will take three arguments.
     All arguments should be pointers to int. The arguments should be i1_ptr, i2_ptr and rslt_ptr
     i1_ptr -> integer1 pointer, i2_ptr integer2 pointer and rslt_ptr result pointer
     No value will be returned from this function
  2) Function addition_using_memory_locations should add the contents of memory locations pointed
     to by i1_ptr, i2_ptr together and store the resulting value in the memory location pointed by
     rslt_ptr

                                      // PART 2
  3) Inside main function dynamically allocate memory for type int and save address returned from
     malloc in a pointer int named i1_pointer
  4) Inside main function dynamically allocate memory for type int and save address returned from
     malloc in a pointer int named i2_pointer
  5) Inside main function dynamically allocate memory for type int and save address returned from
     malloc in a pointer int named result_pointer
  6) Set the memory location pointed by i1_pointer to a value of 22
  7) Set the memory location pointed by i2_pointer to a value of 33

                                    // PART 3
  8) From main call the function addition_using_memory_locations with arguments i1_pointer, i2_pointer
     and result_pointer
  9) Inside main dereference the result_pointer after returning
     from function addition_using_memory_locations and print the value contained in memory location
     pointed to by result_pointer. Result printed should be 55

                                      // PART 4
 10) Free the dynamically allocated memory addresses stored in pointers i1_pointer, i2_pointer and result_pointer
     3 calls to free to be done
*/

#include <stdio.h>
#include <stdlib.h> // malloc, free comes from stdlib.h

                                      // PART 1
// 1) Write a function addition_using_memory_locations which will take three arguments.
//    All arguments should be pointers to int. The arguments should be i1_ptr, i2_ptr and rslt_ptr
//    i1_ptr -> integer1 pointer, i2_ptr integer2 pointer and rslt_ptr result pointer
//    No value will be returned from this function
void addition_using_memory_locations(int * i1_ptr, int * i2_ptr, int * rslt_ptr)
{
  // 2) Function addition_using_memory_locations should add
  //    the contents of memory locations pointed
  //    to by i1_ptr, i2_ptr together and store the resulting
  //    value in the memory location pointed by rslt_ptr
  int r = *i1_ptr + *i2_ptr;
  *rslt_ptr = r;
}


int main()
{
                                      // PART 2
   //  3) Inside main function dynamically allocate memory for type int and save address returned from
   //     malloc in a pointer int named i1_pointer
   int * i1_pointer = (int *) malloc(sizeof(int));

   //  4) Inside main function dynamically allocate memory for type int and save address returned from
   //     malloc in a pointer int named i2_pointer
   int * i2_pointer = (int *) malloc(sizeof(int));

   //  5) Inside main function dynamically allocate memory for type int and save address returned from
   //     malloc in a pointer int named result_pointer
   int * result_pointer = (int *) malloc(sizeof(int));

   //  6) Set the memory location pointed by i1_pointer to a value of 22
   *i1_pointer = 22;

   //  7) Set the memory location pointed by i2_pointer to a value of 33
   *i2_pointer = 33;


                                          // PART 3
   //  8) From main call the function addition_using_memory_locations with arguments i1_pointer, i2_pointer
   //     and result_pointer
   addition_using_memory_locations(i1_pointer, i2_pointer, result_pointer);

   //  9) Inside main dereference the result_pointer after returning
   //     from function addition_using_memory_locations and print the value contained in memory location
   //     pointed to by result_pointer. Result printed should be 55
   printf("Result of addition %d \n", *result_pointer);


                                         // PART 4
   // 10) Free the dynamically allocated memory addresses
   // stored in pointers i1_pointer, i2_pointer and result_pointer
   // 3 calls to free to be done
   free(i1_pointer);
   free(i2_pointer);
   free(result_pointer);
}


//
