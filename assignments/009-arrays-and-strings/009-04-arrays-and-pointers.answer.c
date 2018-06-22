/*
  UNDERSTANDING RELATIONSHIP BETWEEN ARRAYS AND POINTERS -
    USING ARRAYS AS POINTERS AND VICE VERSA
  1) Declare an int array ai of 3 elements, name ai denotes array of int
  2) Initialize 1st, 2nd and 3rd element of ai to 4, 10 and 33
  3) Print the values of ai[0], ai[1] and ai[2]
  4) Declare a pointer to int with name as pi and assign a value of NULL
  5) Print just ai as address and &ai as address. Both ai and &ai are the same
  6) Print the address of ai[0], ai[1], ai[2]
  7) Set the pointer pi to the address starting memory location of ai
  8) Print Addresses of pi + 0, pi + 1, pi + 2
     Compare this with previous output at step 6)
     &ai[0] == pi + 0, &ai[1] == pi + 1, &ai[2] == pi + 2
  9) Derefernce Addresses pi + 0, pi + 1, pi + 2 and print the values
     Compare this with previous output at step 3)
     ai[0] == *(pi + 0), ai[1] == *(pi + 1), ai[2] == *(pi + 2)

  We will interchange the notations used for arrays and pointers
  [] notation will be used on pi
  * Dereference notation will be used on ai

  10) Derefernce Addresses ai + 0, ai + 1, ai + 2 and print the values
      Compare this with previous output at step 3)
  11) We will access values using pi[0], pi[1], pi[2]. This array style of accessing
      and we are using this on pointers
*/

#include <stdio.h>

int main()
{
  // 1) Declare an int array ai of 3 elements, name ai denotes array of int
  int ai[3];

  // 2) Initialize 1st, 2nd and 3rd element of ai to 4, 10 and 33
  ai[0] = 4;
  ai[1] = 10;
  ai[2] = 33;

  // 3) Print the values of ai[0], ai[1] and ai[2]
  printf("Values of ai[0] = %d, ai[1] = %d, ai[2] = %d \n", ai[0], ai[1], ai[2]);

  // 4) Declare a pointer to int with name as pi and assign a value of NULL
  int * pi = NULL;

  // 5) Print just ai as address and &ai as address. Both ai and &ai are the same
  printf("Printing ai = %p, &ai = %p\n", ai, &ai);

  // 6) Print the address of ai[0], ai[1], ai[2]
  printf("Addresses of ai[0] = %p, ai[1] = %p, ai[2] = %p \n",
    &ai[0], &ai[1], &ai[2]);

  // NOTE: ai == &ai ==&ai[0], all the three have same adresses printed

  // 7) Set the pointer pi to the address starting memory location of ai
  pi = ai; // Also pi = &ai; or pi = &ai[0]; can be used

  // 8) Print Addresses of pi + 0, pi + 1, pi + 2
  //    Compare this with previous output at step 6)
  printf("Addresses of (pi + 0) = %p, (pi + 1) = %p, (pi + 2) = %p \n",
    (pi + 0), (pi + 1), (pi + 2) );

  // 9) Derefernce Addresses pi + 0, pi + 1, pi + 2 and print the values
  //    Compare this with previous output at step 3)
  //    ai[0] == *(pi + 0), ai[1] == *(pi + 1), ai[2] == *(pi + 2)
  printf("Values of *(pi + 0) = %d, *(pi + 1) = %d, *(pi + 2) = %d \n",
    *(pi + 0), *(pi + 1), *(pi + 2) );


    // We will interchange the notations used for arrays and pointers
    // [] notation will be used on pi
    // * Dereference notation will be used on ai

  // 10) Derefernce Addresses ai + 0, ai + 1, ai + 2 and print the values
  //    Compare this with previous output at step 3)
  printf("Acces ai array using pointer dereferencing "
         "*(ai + 0) = %d, *(ai + 1) = %d, *(ai + 2) = %d \n",
         *(ai + 0), *(ai + 1), *(ai + 2) );

  // 11) We will access values using pi[0], pi[1], pi[2]. This array style of accessing
  //     and we are using this on pointers
  printf("Access dereferenced pointer values using array notation"
          " pi[0] = %d, pi[1] = %d, pi[2] = %d \n", pi[0], pi[1], pi[2]);
}
