/*
  UNDERSTANDING FUNCTION LEVEL STATIC VARIABLES
  1) Declare a function statik_variable_incrementer which
     takes no argument and returns no value
  2) Declare a function level static int variable
     function_level_statik and assign a value of 0
  3) Print the value of function_level_statik, in the printf
     pass function_level_statik as pre-incremented variable
     hint: use ++variable
  4) Compile the program you should see an error like
     error: use of undeclared identifier 'function_level_statik'
     function level static variable is contained only inside statik_variable_incrementer
     function and is not available for other functions to use, initialization of
     function level static variable happens only once during start of program in this case
     function_level_statik will be set to 0 at the start of the program
     main or any other function won't be able to access function_level_statik
  5) In main function comment out function_level_statik++; to // function_level_statik++;
  6) Compile and run the program again, you will see function_level_statik variable's
     value is retained across multiple calls of the function as the value keeps increasing
     steadily on further calls made
     This is completely different from local variables where values are initialized for each
     calls that you make
*/

#include <stdio.h>

// 1) Declare a function statik_variable_incrementer which
//    takes no argument and returns no value

{ // Begin Function statik_variable_incrementer
  // 2) Declare a function level static int variable
  //    function_level_statik and assign a value of 0


  // 3) Print the value of function_level_statik, in the printf
  //    pass function_level_statik as pre-incremented variable
  //    hint: use ++variable

} // End Function statik_variable_incrementer

// 4) Compile the program you should see an error like
//    error: use of undeclared identifier 'function_level_statik'
//    function level static variable is contained only inside statik_variable_incrementer
//    function and is not available for other functions to use, initialization of
//    function level static variable happens only once during start of program in this case
//    function_level_statik will be set to 0 at the start of the program
//    main or any other function won't be able to access function_level_statik
// NO CODE CHANGE REQUIRED FOR STEP 4) ONLY COMPILATION IS REQUIRED

int main()
{
  // 5) In main function comment out function_level_statik++; to // function_level_statik++;
  function_level_statik++;
  statik_variable_incrementer();
  statik_variable_incrementer();

  // 6) Compile and run the program again, you will see function_level_statik variable's
  //    value is retained across multiple calls of the function as the value keeps increasing
  //    steadily on further calls made
  //    This is completely different from local variables where values are initialized for each
  //    calls that you make
  // NO CODE CHANGE REQUIRED FOR STEP 6) ONLY COMPILATION AND RUNNING THE PROGRAM IS REQUIRED

  // YOU SHOULD SEE OUTPUT LIKE THIS
  // pre-incremented function_level_statik is = 1
  // pre-incremented function_level_statik is = 2
}
