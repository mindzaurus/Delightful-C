
#include <stdio.h>

typedef    unsigned int    whole_number;
typedef    long long int   signed_64bit;

typedef    float           real_number;


typedef enum _FOOD_TYPE
{
  ITALIAN,
  MEXICAN
}
FOOD_TYPE ;

// typedef enum _FOOD_TYPE FOOD_TYPE; // basic way

void print_food_info ( FOOD_TYPE food )
{
  switch (food)
  {
    case ITALIAN:
    printf("pasta pizza cheese tomato garlic \n");
    break;

    case MEXICAN:
    printf("burrito salsa jalapeno tomato \n");
    break;
  }
}

int main()
{
  whole_number wn = 47;
  signed_64bit s64b = 82820;
  real_number rn = 3.14;

  printf("wn %d s64b %lld rn %f \n", wn, s64b, rn);

  print_food_info(ITALIAN);
  print_food_info(MEXICAN);
}
