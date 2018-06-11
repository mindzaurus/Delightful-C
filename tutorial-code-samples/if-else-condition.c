
#include <stdio.h>


// if kind_of_animal is 1 then it means dog
// anything else is uknown or undefined
// we only handle dog sound for the moment

void make_animal_sound(int kind_of_animal)
{
  if( kind_of_animal == 1)
  {
    printf("Barking! OOOF! OOOF! \n");
  }
  else
  {
    printf("Unknown animal! emitting silence \n");
  }
}

int main()
{
  make_animal_sound(1); // dog
  make_animal_sound(-1); // Unknown
  make_animal_sound(0); // Unknown
  make_animal_sound(2); // Unknown
}
