/*
  UNDERSTANDING ADDITION OPERATOR IN C - LIONS AND ANTELOPES OF SERENGETI

  Use this template to complete this exercise

  PART ONE
  ========
  1) Declare a int variable lions_in_serengeti and assign a value of 86
  2) Declare a int variable antelopes_in_serengeti and assign a value of 487
  3) Declare a int variable total_lions_and_antelopes_count and assign a value of 0
  4) Add the count of lions_in_serengeti and antelopes_in_serengeti and set this value
     to total_lions_and_antelopes_count variable
  5) Print the value of total_lions_and_antelopes_count answer should be 573

  PART TWO
  ========
  6) There are 3 new lion cubs born, so lion count now increases by 3.
     Use the addition operator like "x = x + some_value" and update
     variable lions_in_serengeti to reflect the addition of 3 new lion cubs
  7) Print the new incremented value of variable lions_in_serengeti

  PART THREE
  ==========
  8) There are 17 new antelopes born, so antelope count increases by 17.
     Use the += increment operator like "x += some_value " and update
     variable antelopes_in_serengeti by 17
  9) Print the new incremented value of variable antelopes_in_serengeti
*/

#include <stdio.h>

int main()
{

/////////////////////////////// PART ONE //////////////////////////////////

  // 1) Declare a int variable lions_in_serengeti and assign a value of 86
  int lions_in_serengeti = 86;

  // 2) Declare a int variable antelopes_in_serengeti and assign a value of 487
  int antelopes_in_serengeti = 487;

  // 3) Declare a int variable total_lions_and_antelopes_count and assign a value of 0
  int total_lions_and_antelopes_count = 0;

  // 4) Add the count of lions_in_serengeti and antelopes_in_serengeti and set this value
  //    to total_lions_and_antelopes_count variable
  total_lions_and_antelopes_count = lions_in_serengeti + antelopes_in_serengeti;

  // 5) Print the value of total_lions_and_antelopes_count answer should be 573
  printf("total_lions_and_antelopes_count is = %d\n", total_lions_and_antelopes_count);


  ///////////////////////////////PART TWO //////////////////////////////////

  // 6) There are 3 new lion cubs born, so lion count now increases by 3.
  //    Use the addition operator like "x = x + some_value" and update
  //    variable lions_in_serengeti to reflect the addition of 3 new lion cubs
  //    incremented value should be 89
  lions_in_serengeti = lions_in_serengeti + 3;

  // 7) Print the new incremented value of variable lions_in_serengeti
  printf("lions_in_serengeti is = %d\n", lions_in_serengeti);


  /////////////////////////////// PART THREE //////////////////////////////////

  // 8) There are 17 new antelopes born, so antelope count increases by 17.
  //    Use the += increment operator like "x += some_value " and update
  //    variable antelopes_in_serengeti by 17, incremented value should be 504
  antelopes_in_serengeti += 17;

  // 9) Print the new incremented value of variable antelopes_in_serengeti
  printf("antelopes_in_serengeti is = %d\n", antelopes_in_serengeti);
}

// references
// https://en.wikipedia.org/wiki/Serengeti_National_Park
//
