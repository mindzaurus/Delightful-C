
#include <stdio.h>

int main()
{
  int i = -1;
  float f = 0.00;
  char s[32];

  printf("Enter integer \n");
  scanf("%d",&i);

  printf("Enter float \n");
  scanf("%f",&f);

  printf("Enter string \n");
  scanf("%s", s);

  printf("Your given inputs were i = %d, f = %f, s = %s \n", i, f, s);
}
