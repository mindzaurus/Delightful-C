/*
  UNDERSTANDING #IFDEF CONDITIONAL COMPILATION FLAGS - PRINT WELCOME MESSAGE CONDITIONALLY
  1) Write a function void welcome_message_printer() which prints "Welcome to THE UNIVERSE\n"
     Function welcome_message_printer should be conditionally compiled only when
     flag PRINT_WELCOME_MESSAGE is defined
  2) From main function call function welcome_message_printer conditionally using the flag
     PRINT_WELCOME_MESSAGE
  3) Compile the program using command
     gcc 007-03-ifdef.template.c
     When you run the program you won't be able to see any print messages

  4) uncomment line 25 // #define PRINT_WELCOME_MESSAGE to #define PRINT_WELCOME_MESSAGE
  5) Compile the program using command
     gcc 007-03-ifdef.template.c
     When you run the program you can see the message "Welcome to THE UNIVERSE" printed
  6) Comment out line 25 #define PRINT_WELCOME_MESSAGE to // #define PRINT_WELCOME_MESSAGE

  7) Compile the program using command
     gcc -DPRINT_WELCOME_MESSAGE 007-03-ifdef.template.c
  8) When you run the program you can see the message "Welcome to THE UNIVERSE" printed
*/

#include <stdio.h>

// #define PRINT_WELCOME_MESSAGE /* STEPS 4) and 6) do be done on this line */

// 1) Write a function void welcome_message_printer() which prints "Welcome to THE UNIVERSE\n"
//    Function welcome_message_printer should be conditionally compiled only when
//    flag PRINT_WELCOME_MESSAGE is defined


int main()
{

  // 2) From main function call function welcome_message_printer conditionally using the flag
  //    PRINT_WELCOME_MESSAGE

  // 3) Compile the program using command
  //    gcc 007-03-ifdef.template.c
  //    When you run the program you won't be able to see any print messages

  // 4) uncomment line 25 // #define PRINT_WELCOME_MESSAGE to #define PRINT_WELCOME_MESSAGE

  // 5) Compile the program using command
  //    gcc 007-03-ifdef.template.c
  //    When you run the program you can see the message "Welcome to THE UNIVERSE" printed

  // 6) Comment out line 25 #define PRINT_WELCOME_MESSAGE to // #define PRINT_WELCOME_MESSAGE

  // 7) Compile the program using command
  //    gcc -DPRINT_WELCOME_MESSAGE 007-03-ifdef.template.c

  // 8) When you run the program you can see the message "Welcome to THE UNIVERSE" printed
}
