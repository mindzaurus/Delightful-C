/*
  UNDERSTANDING SWITCH CASE STATEMENT IN C - FOOD MATCHER FUNCTION

  1) Declare an enum which has following categories in it
     BREAD, FISH, FRIES, PANCAKE, UNKNOWN - typedef this enum to FOOD_TYPE
  2) Implement function find_a_match which takes in FOOD_TYPE variable f as argument
     The function will return no value
  3) Use switch case to implement this multiple condition matching
     Inside funtion find_a_match you need to print a matching dish type for FOOD_TYPE passed in
  4) if food type is BREAD you should print BREAD and BUTTER
  5) if food type is FISH you should print FISH and CHIPS
  6) if food type is FRIES you should print FRIES and KETCHUP
  7) if food type is PANCAKE you should print PANCAKE and MAPLE SYRUP
  8) if unknown food type is passed in then print NO MATCH, hint: use default case for this

  9) From main call find_a_match with food type as BREAD
  10) From main call find_a_match with food type as FISH
  11) From main call find_a_match with food type as FRIES
  12) From main call find_a_match with food type as PANCAKE
  13) From main call find_a_match with food type as UNKNOWN
*/

#include <stdio.h>

  // 1) Declare an enum which has following categories in it
  //    BREAD, FISH, FRIES, PANCAKE, UNKNOWN - typedef this enum to FOOD_TYPE
  typedef enum {
    BREAD,
    FISH,
    FRIES,
    PANCAKE,
    UNKNOWN
  } FOOD_TYPE;

  // 2) Implement function find_a_match which takes in FOOD_TYPE variable f as argument
  //    The function will return no value
  void find_a_match ( FOOD_TYPE f )
  {
    // 3) Use switch case to implement this multiple condition matching
    //    Inside funtion find_a_match you need to print a matching dish type for FOOD_TYPE passed in
    switch(f)
    {
      // 4) if food type is BREAD you should print BUTTER
      case BREAD:
      printf("BREAD AND BUTTER\n");
      break;

      // 5) if food type is FISH you should print CHIPS
      case FISH:
      printf("FISH and CHIPS\n");
      break;

      // 6) if food type is FRIES you should print KETCHUP
      case FRIES:
      printf("FRIES and KETCHUP\n");
      break;

      // 7) if food type is PANCAKE you should print MAPLE SYRUP
      case PANCAKE:
      printf("PANCAKE and MAPLE SYRUP\n");
      break;

      // 8) if unknown food type is passed in then print NO MATCH, hint: use default case for this
      default:
      printf("NO MATCH\n");
      break;
    }

  }

int main()
{
  // 9) From main call find_a_match with food type as BREAD
  find_a_match(BREAD);

  // 10) From main call find_a_match with food type as FISH
  find_a_match(FISH);

  // 11) From main call find_a_match with food type as FRIES
  find_a_match(FRIES);

  // 12) From main call find_a_match with food type as PANCAKE
  find_a_match(PANCAKE);

  // 13) From main call find_a_match with food type as UNKNOWN
  find_a_match(UNKNOWN);
}
