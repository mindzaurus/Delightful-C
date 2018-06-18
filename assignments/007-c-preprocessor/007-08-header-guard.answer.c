/*
  UNDERSTANDING HEADER GUARDS - TYPEDEF ENUM SPORT TYPE
  1) Declare a header (.h file) by name sport_type.h
  2) Define and typedef an enum SPORT_TYPE in the sport_type.h with categories
     INDOOR, OUTDOOR and UNKNOWN
  3) Include the header sport_type.h
  4) Include the header sport_type.h for the second time once again and comment out this line
  5) Add a main function and compile, compilation should be fine now
  6) Uncomment the second include done in STEP 4
  7) Compile the program you should get some error like: redefinition of enumerator 'UNKNOWN'
  8) Add header guards in sport_type.h and compile again, compilation should succeed now

  Reference  implementation of sport_type.h can be found in sport_type.answer.h

  ONLY COMPILATION IS ENOUGH NO EXECUTING PROGRAM IS NEEDED FOR THIS EXERCISE
*/

// 3) Include the header sport_type.h
#include "sport_type.answer.h"

// 4) Include the header sport_type.h for the second time once again and comment out this line
#include "sport_type.answer.h"

// 5) Add a main function and compile, compilation should be fine now
int main()
{

}

// 6) Uncomment the second include done in STEP 4

// 7) Compile the program you should get some error like: redefinition of enumerator 'UNKNOWN'

// 8) Add header guards in sport_type.h and compile again, compilation should succeed now






//
