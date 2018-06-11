
#include <stdio.h>

#include <limits.h>

int main ()
{
    signed long long int slli_min = LONG_MIN;
    signed long long int slli_max = LONG_MAX;

    printf("signed long long int slli_min is   %lld \n", slli_min);
    printf("signed long long int slli_max is    %lld \n", slli_max);


    {
        // There is no ULONG_MIN the lowest value for unsigned long long is zero
        unsigned long long int uslli_max = ULONG_MAX;
        printf("unsigned long long int uslli_max is %llu \n", uslli_max);
    }
}




//