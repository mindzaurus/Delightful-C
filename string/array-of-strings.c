#include <stdio.h>

int main()
{
  char * food_list [ ] =
  {
    "Bread",
    "Jam",
    "Biscuit"
  };

  printf("%p has %s\n", food_list[0], food_list[0]);
  printf("%p has %s\n", food_list[1], food_list[1]);
  printf("%p has %s\n", food_list[2], food_list[2]);

  printf("\n%p holds char * pointer %p \n", &food_list[0], food_list[0]);
  printf("%p holds char * pointer %p \n", &food_list[1], food_list[1]);
  printf("%p holds char * pointer %p \n", &food_list[2], food_list[2]);
}
