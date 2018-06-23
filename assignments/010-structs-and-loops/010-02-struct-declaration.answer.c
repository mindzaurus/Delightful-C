/*
  UNDERSTANDING STRUCT DECLARATIONS - PLAYER_INFO

  1) Declare a struct called player_info
  2) Create 3 fields in player_info
     string player_name, string game_type, int world_rank
  3) Inside main function create a player_info data type variable named player1
  4) Set the fields of player1 using dot operator of struct as follows
     player_name -> "Roger Federer"
     game_type   -> "Tennis"
     world_rank  -> 1
  5) Print all the fields of the struct

*/

#include <stdio.h>

// 1) Declare a struct called player_info
struct player_info
{
  // 2) Create 3 fields in player_info
  //    string player_name, string game_type, int world_rank
  char * player_name;
  char * game_type;
  int world_rank;
};

int main()
{
  // 3) Inside main function create a player_info data type variable named player1
  struct player_info player1;

  // 4) Set the fields of player1 using dot operator of struct as follows
  //    player_name -> "Roger Federer"
  //    game_type   -> "Tennis"
  //    world_rank  -> 1
  player1.player_name = "Roger Federer";
  player1.game_type   = "Tennis";
  player1.world_rank  = 1;

  // 5) Print all the fields of the struct
  printf("player1.player_name: %s \n",  player1.player_name);
  printf("player1.game_type:   %s \n", player1.game_type);
  printf("player1.world_rank:  %d \n", player1.world_rank);
}

//
