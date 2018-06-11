
#include <stdio.h>

void new_player_added()
{
  // static variable will be initialized only once during the starup of program
  static int player_count_statik = 0; // static variable defined here

  // Everytime function is entered this value will be reset to 0
  int player_count_not_a_statik = 0;

  // function level static variables are visible only inside the function which defines it
  player_count_statik++; // increment number by one

  printf("static variable Number of players = %d \n", player_count_statik);


  player_count_not_a_statik++;
  // this will always be printing 1
  printf("local variable Number of players = %d \n\n", player_count_not_a_statik);
}

void remove_player()
{
  // function level static variables are invisible to all other functions
  // layer_count_statik--;
}

int main()
{
  new_player_added();
  new_player_added();
  new_player_added();
}
