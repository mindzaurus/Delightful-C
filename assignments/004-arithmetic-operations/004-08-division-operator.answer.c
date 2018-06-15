
/*
  UNDERSTANDING DIVISION OPERATOR IN C - WATER CONSUMPTION OF A CITY

  Used this template to complete this exercise

  PART ONE
  ========
  1) Declare a int variable total_water_in_litres and assign a value of 360000
  2) Declare a int variable water_per_person_in_litres and assign a value of 48
  3) Declare a int variable number_of_persons_supplied_with_water and assign a value of 0
  4) Find the number of number_of_persons_supplied_with_water by dividing
     total_water_in_litres with water_per_person_in_litres
  5) Print the value of number_of_persons_supplied_with_water, answer should be 7500

  PART TWO
  ========
  6) The government plans to reduce water consumption per person by half,
     how many litres of water would a person get then?
     Use the division operator like "x = x / 2" and update
     variable water_per_person_in_litres to reflect half consumption quantity, answer should be 24
  7) Print the new value of variable water_per_person_in_litres when reduced to half

  PART THREE
  ==========
  8) The government also considered what if water consumption is reduced per person by one third,
     how many litres of water would a person get then?
     Use the /= division operator like "x /= 3" and update
     variable water_per_person_in_litres,  answer should be 16
  9) Print the new value of variable water_per_person_in_litres when reduced to one third
*/


#include <stdio.h>

int main()
{
                                    // PART ONE
  // 1) Declare a int variable total_water_in_litres and assign a value of 360000
  int total_water_in_litres = 360000;

  // 2) Declare a int variable water_per_person_in_litres and assign a value of 48
  int water_per_person_in_litres = 48;

  // 3) Declare a int variable number_of_persons_supplied_with_water and assign a value of 0
  int number_of_persons_supplied_with_water = 0;

  // 4) Find the number of number_of_persons_supplied_with_water by dividing
  //    total_water_in_litres with water_per_person_in_litres
  number_of_persons_supplied_with_water = total_water_in_litres / water_per_person_in_litres;

  // 5) Print the value of number_of_persons_supplied_with_water, answer should be 7500
  printf("number_of_persons_supplied_with_water is = %d\n", number_of_persons_supplied_with_water);

                                    // PART TWO
  // 6) The government plans to reduce water consumption per person by half,
  //    how many litres of water would a person get then?
  //    Use the division operator like "x = x / 2" and update
  //    variable water_per_person_in_litres to reflect half consumption quantity
  water_per_person_in_litres = water_per_person_in_litres / 2;

  // 7) Print the new value of variable water_per_person_in_litres when reduced to half
  printf("water_per_person_in_litres is = %d\n", water_per_person_in_litres);

                                    // PART THREE
  water_per_person_in_litres = 48; // don't delete or modify this line
  // 8) The government also considered what if water consumption is reduced per person by one third,
  //    how many litres of water would a person get then?
  //    Use the /= division operator like "x /= 3" and update
  //    variable water_per_person_in_litres
  water_per_person_in_litres /= 3;

  // 9) Print the new value of variable water_per_person_in_litres when reduced to one third
  printf("water_per_person_in_litres is = %d\n", water_per_person_in_litres);
}
