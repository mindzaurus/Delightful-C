
#include <stdio.h>

enum ANIMAL_TYPE {
  CAT,
  DOG,
  DUCK,
  UNKNOWN
};



void make_animal_sound ( enum ANIMAL_TYPE animal )
{
  switch(animal)
  {
    case DOG:
    printf("Barking! Woof Woof \n");
    break;

    case CAT:
    printf("Meowing! Meow Meow \n");
    break;

    case DUCK:
    printf("Quacking! Quack Quack \n");
    break;

    default:
    printf("Unknown animal! emitting silence \n");
    break;
  }
}


enum WEATHER_TYPE {
  WINDY = 99, // you can add any distinct values for these categories
  SNOWY = 102,
  UNDEFINED  = 211
};

void whats_the_mood_for_weather( enum WEATHER_TYPE current_weather)
{
  switch(current_weather)
  {
    case WINDY:
    printf("I will fly kite! \n");
    break;

    case SNOWY:
    printf("Should I ski or build snow man ? \n");
    break;

    case UNDEFINED:
    printf("I will watch TV \n");
    break;
  }

}

int main()
{
  make_animal_sound(DOG);
  make_animal_sound(CAT);
  make_animal_sound(DUCK);
  make_animal_sound(UNKNOWN);

  whats_the_mood_for_weather(WINDY);
  whats_the_mood_for_weather(SNOWY);
  whats_the_mood_for_weather(UNDEFINED);
}
