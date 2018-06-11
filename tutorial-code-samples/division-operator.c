#include <stdio.h>

/*
  1) integer divide: we will find number of students per classroom,
     when we know total number of students and number of classrooms

  2) float divide: we will find cost of food per person,
     when we know total cost incurred and the number of persons

  3) x /= 4 is same as x = x / 4
*/

int main()
{
  int total_number_of_students = 225;
  int number_of_classrooms = 15;

  int number_of_students_per_classroom = total_number_of_students / number_of_classrooms;
  printf("Number of students per classroom %d \n", number_of_students_per_classroom);

  float total_cost_incurred = 397.75;
  float number_of_persons = 25.0;

  float cost_per_person = total_cost_incurred / number_of_persons;
  printf("Cost of food per person %f \n", cost_per_person);

  int x = 20;
  x = x / 5;
  printf("x = x / 5 is %d \n", x);

  x = 20;
  x /= 5;
  printf("x /= 5 is %d \n", x);
}
