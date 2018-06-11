

/*
1) integer add: we will add number of boys and girls in a class

2) float add: we will add cost of a hat and a umbrella

3)
+= is an increment operator, where = is appended to + operator
x += 4 is same as x = x + 4
*/


#include <stdio.h>

int main()
{
  int number_of_boys = 15;
  int number_of_girls = 16;

  int total_number_of_students = number_of_boys + number_of_girls;
  printf("Total number of students = %d \n", total_number_of_students);

  float cost_of_hat = 9.10;
  float cost_of_umbrella = 11.20;

  float total_cost = cost_of_hat + cost_of_umbrella;
  printf("Total cost = %f \n", total_cost);

  int x = 5;
  x = x + 5;
  printf("x = x + 5 is %d \n", x);

  x = 5;
  x += 5;
  printf("x += 5 is %d \n", x);
  
}
