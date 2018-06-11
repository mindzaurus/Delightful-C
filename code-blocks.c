
#include <stdio.h>


void handle_game_play()
{
  { // START of first code block

    // let us handle game start
    int i = 0;
    { // START of new code block within first code block
      int game_started = i + 1;
      printf(" First  code block game started %d \n", game_started);
    } // END of new code block within first code block
  } // END of first code block

  { // START of second code block

    // let us handle end of the game
    int i = 0; // same variable i declared in line number 10
    { // START of new code block within second code block
      int game_started = i; // same name declared above in line number 12
      printf(" Second  code block game started %d \n", game_started);
    } // END of new code block within second code block
  } // END of second code block
}

int main()
{
  handle_game_play();
}
