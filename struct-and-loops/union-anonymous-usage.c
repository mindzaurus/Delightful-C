
#include <stdio.h>

typedef enum _NUMBER_TYPE
{
    I4 = 0x0dad0dad, // signed int 4 bytes type
    UI4, // unsigned int 4 bytes type
    I8, //signed long long int 8 bytes type
    UI8, // unsigned long long int 8 bytes type
    F4, // float 4 bytes type
    F8 // double 8 bytes type
} NUMBER_TYPE;

#ifdef UNIONIZED_NUMBER_IMPLEMENTATION
typedef struct _number
{
  NUMBER_TYPE type;

  union {
    signed int              i4;
    unsigned int           ui4;
    signed long long int    i8;
    unsigned long long int ui8;
    float                   f4;
    double                  f8;
  };

} number;

#else

typedef struct _number
{
  NUMBER_TYPE type;
  signed int              i4;
  unsigned int           ui4;
  signed long long int    i8;
  unsigned long long int ui8;
  float                   f4;
  double                  f8;
} number;

#endif

void print_number(number n)
{
  printf("sizeof(number) %ld\n", sizeof(number));
  switch(n.type) {
    case UI8:
    printf("UI8 %ld\n", n.ui8);
    break;

    case F4:
    printf("F4 %f\n", n.f4);
    break;

    default:
    break;
  }
}

int main()
{
  number v1;

  v1.type = UI8;
  v1.ui8 = 20283830272667;
  print_number(v1);

  v1.type = F4;
  v1.f4 = 28293.377392;
  print_number(v1);
}
