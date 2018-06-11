
#include <stdio.h>

int main()
{
  unsigned int total_number_of_volunteers = 52;
  unsigned int number_of_students = 39;

  unsigned int number_of_senior_citizens = total_number_of_volunteers - number_of_students;
  printf("Number of senior citizens = %u \n", number_of_senior_citizens);
}
