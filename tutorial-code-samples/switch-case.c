
#include <stdio.h>

void make_animal_sound (int kind_of_animal )
{
  switch ( kind_of_animal )
  {
    case 1: // dog
    printf("Barking! Woof Woof! \n");
    break;

    case 2: // cat
    printf("Meowing! Meow Meow! \n");
    break;

    case 4: // duck - values don't have to be continuous
    printf("Quacking! Quack Quack! \n");
    break;

    case -23: // horse
    printf("Neighing! Neigh Neigh! \n");
    break;


    // cases 50, 52, 56 are called fall through they don't have a break inbetween them
    case 50: // Emily -> human
    case 52: // Kumar -> human
    case 56: // Kim -> human
    printf("Shouting! Yahoooo! Yipeeee! \n");
    break;

    default:
    printf("Unknown animal! emitting silence \n");
    break;
  }
}

int main()
{
  make_animal_sound(1);
  make_animal_sound(0);
  make_animal_sound(2);
  make_animal_sound(4);
  make_animal_sound(-23);

  make_animal_sound(50);
  make_animal_sound(52);
  make_animal_sound(56);
}
