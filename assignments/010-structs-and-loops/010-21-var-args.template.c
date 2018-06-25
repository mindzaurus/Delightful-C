/*
  UNDERSTANDING VARIABLE ARGUMENTS FUNCTION - WORD NUMBERING PROGRAM

  1) Write a variable arguments function print_numbered_words which takes
     int number_of_words as the first argument and then takes variable arguments
     using ... operator
  2) Declare a arguments list variable of type va_list named arg_list
  3) Use va_start function extract all variable arguments into arg_list. The
     variable args will start after number_of_words so pass this should be used
     in va_start as well
  4) Loop through all the arguments extract each argument using va_arg call
     and print it as a string along with increasing number count
  5) When the function is called for e.g print_numbered_words(2, "Sky", "Blue");
    should print
                  1. Sky
                  2. Blue
    for a call print_numbered_words(3, "Sun", "Set", "Grill") should print
                  1. Sun
                  2. Set
                  3. Grill
  6) After the end of for loop call va_end function to cleanup arg_list constructed
     using va_start
  7) From inside main function make these two function calls
     print_numbered_words(2, "Sky", "Blue");
     print_numbered_words(3, "Sun", "Set", "Grill");
  8) Your output should match as follows
      1. Sky
      2. Blue

      1. Sun
      2. Set
      3. Grill

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// 1) Write a variable arguments function print_numbered_words which takes
//    int number_of_words as the first argument and then takes variable arguments
//    using ... operator

// 2) Declare a arguments list variable of type va_list named arg_list


// 3) Use va_start function extract all variable arguments into arg_list. The
//    variable args will start after number_of_words so pass this should be used
//    in va_start as well


// 4) Loop through all the arguments extract each argument using va_arg call
//    and print it as a string along with increasing number count

// 6) After the end of for loop call va_end function to cleanup arg_list constructed
//    using va_start


int main()
{
  // 7) From inside main function make these two function calls
  //    print_numbered_words(2, "Sky", "Blue");
  //    print_numbered_words(3, "Sun", "Set", "Grill");


  // 8) Your output should match as follows
  //     1. Sky
  //     2. Blue
  //
  //     1. Sun
  //     2. Set
  //     3. Grill

}

//
