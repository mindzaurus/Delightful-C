
/*
  UNDERSTANDING #IFNDEF CONDITIONAL COMPILATION FLAGS - CAT LOVERS
  1) Write a function void message_for_dog_lovers() which prints "Dogs can be great pets\n"
     Function message_for_dog_lovers should be conditionally compiled only when
     flag CAT_LOVERS is not defined, hint: use #ifndef
  2) From main function, call function message_for_dog_lovers when flag CAT_LOVERS is not defined
     hint: use #ifndef
  3) Compile the program using command
     gcc 007-05-ifndef.template.c
     When you run the program you will see message "Dogs can be great pets\n"

  4) uncomment line 26 // #define CAT_LOVERS to #define CAT_LOVERS
  5) Compile the program using command
     gcc 007-03-ifdef.template.c
     When you run the program you shouldn't see any print messages
  6) Comment out line 26 #define CAT_LOVERS to // #define CAT_LOVERS

  7) Compile the program using command
     gcc -DCAT_LOVERS 007-05-ifndef.template.c
  8) When you run the program you shouldn't see any print messages
*/

#include <stdio.h>

// #define CAT_LOVERS /* STEPS 4) and 6) do be done on this line */

// 1) Write a function void message_for_dog_lovers() which prints "Dogs can be great pets\n"
//    Function message_for_dog_lovers should be conditionally compiled only when
//    flag CAT_LOVERS is not defined, hint: use #ifndef
#ifndef CAT_LOVERS
void message_for_dog_lovers()
{
  printf("Dogs can be great pets\n");
}
#endif

int main()
{

  // 2) From main function, call function message_for_dog_lovers when flag CAT_LOVERS is not defined
  //    hint: use #ifndef
  #ifndef CAT_LOVERS
  message_for_dog_lovers();
  #endif

  // 3) Compile the program using command
  //    gcc 007-05-ifndef.template.c
  //    When you run the program you will see message "Dogs can be great pets\n"

  // 4) uncomment line 26 // #define CAT_LOVERS to #define CAT_LOVERS

  // 5) Compile the program using command
  //    gcc 007-03-ifdef.template.c
  //    When you run the program you shouldn't see any print messages

  // 6) Comment out line 26 #define CAT_LOVERS to // #define CAT_LOVERS

  // 7) Compile the program using command
  //    gcc -DCAT_LOVERS 007-05-ifndef.template.c

  // 8) When you run the program you shouldn't see any print messages

}
