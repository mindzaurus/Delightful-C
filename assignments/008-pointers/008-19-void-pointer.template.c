/*
  UNDERSTANDING THE VOID POINTERS - VOID POINTERS ARE GENERIC POINTERS

  1) Write a function which which will has function signature
     void return_twice_the_original_int ( void * value_ptr, void * result_ptr)
  2) Inside the return_twice_the_original_int declare int pointer val_int_ptr
     Assign the value_ptr to val_int_ptr after typecasting to (int *)
  3) Inside the return_twice_the_original_int declare int pointer rslt_int_ptr
     Assign the result_ptr to rslt_int_ptr after typecasting to (int *)
  4) Multiply 2 with the int value dereferenced on val_int_ptr, store the multiplied
     value to memory location pointed by rslt_int_ptr

  5) Write a function which which will has function signature
     void return_twice_the_original_float ( void * value_ptr, void * result_ptr)
  6) Inside the return_twice_the_original_float declare float pointer val_float_ptr
     Assign the value_ptr to val_float_ptr after typecasting to (float *)
  7) Inside the return_twice_the_original_float declare int pointer rslt_float_ptr
     Assign the result_ptr to rslt_float_ptr after typecasting to (float *)
  8) Multiply 2.0 with the float value dereferenced on val_float_ptr, store the multiplied
     value to memory location pointed by rslt_float_ptr

  9) Write a function which which will has function signature
     void return_twice_the_original_generic ( void * value_ptr, void * result_ptr, int data_type)
 10) Inside return_twice_the_original_generic if data_type is passed as 1 call function
     return_twice_the_original_int with arguments value_ptr and result_ptr
 11) Inside return_twice_the_original_generic if data_type is passed as 2 call function
     return_twice_the_original_float with arguments value_ptr and result_ptr

 12) Inside main function declare int variable value_int and initialize it to 223
 13) Inside main function declare float variable value_float and initialize it to 3.14
 14) Inside main function declare int variable result_int and initialize it to 0
 15) Inside main function declare float variable result_float and initialize it to 0
 16) Call function return_twice_the_original_generic with arguments
     address of value_int, address of result_int and data_type as 1
 17) Print the value of result_int
 18) Call function return_twice_the_original_generic with arguments
     address of value_float, address of result_float and data_type as 2
 19) Print the value of result_float
*/


#include <stdio.h>

// 1) Write a function which which will has function signature
//    void return_twice_the_original_int ( void * value_ptr, void * result_ptr)

 {
   // 2) Inside the return_twice_the_original_int declare int pointer val_int_ptr
   //    Assign the value_ptr to val_int_ptr after typecasting to (int *)


   // 3) Inside the return_twice_the_original_int declare int pointer rslt_int_ptr
   //    Assign the result_ptr to rslt_int_ptr after typecasting to (int *)


   // 4) Multiply 2 with the int value dereferenced on val_int_ptr, store the multiplied
   //    value to memory location pointed by rslt_int_ptr

 }

 // 5) Write a function which which will has function signature
 //    void return_twice_the_original_float ( void * value_ptr, void * result_ptr)
 void return_twice_the_original_float ( void * value_ptr, void * result_ptr)
 {
   // 6) Inside the return_twice_the_original_float declare float pointer val_float_ptr
   //    Assign the value_ptr to val_float_ptr after typecasting to (float *)


   // 7) Inside the return_twice_the_original_float declare int pointer rslt_float_ptr
   //    Assign the result_ptr to rslt_float_ptr after typecasting to (float *)


   // 8) Multiply 2.0 with the float value dereferenced on val_float_ptr, store the multiplied
   //    value to memory location pointed by rslt_float_ptr

 }

 // 9) Write a function which which will has function signature
 //    void return_twice_the_original_generic ( void * value_ptr, void * result_ptr, int data_type)
void return_twice_the_original_generic ( void * value_ptr, void * result_ptr, int data_type)
{
  // 10) Inside return_twice_the_original_generic if data_type is passed as 1 call function
  //     return_twice_the_original_int with arguments value_ptr and result_ptr


  // 11) Inside return_twice_the_original_generic if data_type is passed as 2 call function
  //     return_twice_the_original_float with arguments value_ptr and result_ptr

}

int main()
{
  // 12) Inside main function declare int variable value_int and initialize it to 223


  // 13) Inside main function declare float variable value_float and initialize it to 3.14


  // 14) Inside main function declare int variable result_int and initialize it to 0


  // 15) Inside main function declare float variable result_float and initialize it to 0


  // 16) Call function return_twice_the_original_generic with arguments
  //     address of value_int, address of result_int and data_type as 1


  // 17) Print the value of result_int


  // 18) Call function return_twice_the_original_generic with arguments
  //     address of value_float, address of result_float and data_type as 2


  // 19) Print the value of result_float

}
