/*
  UNDERSTANDING ARRAY OF STRINGS - NAMES OF FAMOUS TENNIS PLAYERS

  1) Declare an array of strings and store the names of famous tennis players
     in order shown below, name the array as famous_tennis_players
     "Roger Federer", "Serena Williams", "Rafael Nadal", "Andy Murray"
     Use the curly braces initializer
  2) Print each of the names separated by newline and index array index of char *
     arrays for printing an individual string containing name
*/

#include <stdio.h>

int main()
{
  // 1) Declare an array of strings and store the names of famous tennis players
  //    in order shown below, name the array as famous_tennis_players
  //    "Roger Federer", "Serena Williams", "Rafael Nadal", "Andy Murray"
  //    Use the curly braces initializer
  char * famous_tennis_players[ ] =
    {
      "Roger Federer",
      "Serena Williams",
      "Rafael Nadal",
      "Andy Murray"
    };

  // 2) Print each of the names separated by newline and index array index of char *
  //    arrays for printing an individual string containing name
  printf(" First name  == %s \n", famous_tennis_players[0]);
  printf(" Second name == %s \n", famous_tennis_players[1]);
  printf(" Third name  == %s \n", famous_tennis_players[2]);
  printf(" Fourth name == %s \n", famous_tennis_players[3]);
}
