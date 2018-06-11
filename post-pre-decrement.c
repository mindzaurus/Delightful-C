#include <stdio.h>

int main()
{

  {
    printf("Post decrement \n");
    int j = 0;
    int k = 5;

    j = k--;
    printf("Using j = k--, j = %d, k = %d \n", j, k);

    j = 0;
    k = 5;

    j = k;
    k = k - 1; // also k -= 1 can be used
    printf("Simple code j = %d, k = %d \n", j, k);
  }

  {
    printf("\nPre decrement \n");
    int j = 0;
    int k = 5;

    j = --k;
    printf("Using j = --k, j = %d, k = %d \n", j, k);


    j = 0;
    k = 5;

    k = k - 1; // also k -= 1 can be used
    j = k;
    printf("Simple code j = %d, k = %d \n", j, k);
  }

}
