
/*
  UNDERSTANDING ERROR AND PREDEFINED MACRO DIRECTIVES - EXPERIMENTAL FEATURE AND FILE, LINE NUMBERS EXAMPLES
  1) Add a error directive stating "EXPERIMENTAL UNSTABLE CODE USED" within #ifdef flag EXPERIMENTAL_CODE
  2) Add main function and compile the program using command
     gcc 007-09-error-and-predefined-macros.template.c
     Compilation should be fine now without any error
  3) Compile again with following command
     gcc -DEXPERIMENTAL_CODE 007-09-error-and-predefined-macros.template.c
     You should get an error like error: #error "EXPERIMENTAL UNSTABLE CODE USED"
  4) Inside main try to print the filename, function and line number using the
     __FILE__, __FUNCTION__ and __LINE__ inbuilt macros
  5) Compile using following command
     gcc 007-09-error-and-predefined-macros.template.c
  6) Execute the program You should see output like following line number may vary though
     In file: 007-09-error-and-predefined-macros.template.c , function: main , line: 29
*/

#include <stdio.h>

// 1) Add a error directive stating "EXPERIMENTAL UNSTABLE CODE USED" within #ifdef flag EXPERIMENTAL_CODE

// 2) Add main function and compile the program using command
//    gcc 007-09-error-and-predefined-macros.template.c
//    Compilation should be fine now without any error


// 3) Compile again with following command
//    gcc -DEXPERIMENTAL_CODE 007-09-error-and-predefined-macros.template.c
//    You should get an error like error: #error "EXPERIMENTAL UNSTABLE CODE USED"

// 4) Inside main try to print the filename, function and line number using the
//    __FILE__, __FUNCTION__ and __LINE__ inbuilt macros

// 5) Compile using following command
//    gcc 007-09-error-and-predefined-macros.template.c

// 6) Execute the program You should see output like following line number may vary though
//    In file: 007-09-error-and-predefined-macros.template.c , function: main , line: 29
