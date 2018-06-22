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


  // 2) Initialize 1st, 2nd and 3rd element of ai to 4, 10 and 33


  // 3) Print the values of ai[0], ai[1] and ai[2]


  // 4) Declare a pointer to int with name as pi and assign a value of NULL


  // 5) Print just ai as address and &ai as address. Both ai and &ai are the same


  // 6) Print the address of ai[0], ai[1], ai[2]


  // NOTE: ai == &ai ==&ai[0], all the three have same adresses printed

  // 7) Set the pointer pi to the address starting memory location of ai


  // 8) Print Addresses of pi + 0, pi + 1, pi + 2
  //    Compare this with previous output at step 6)


  // 9) Derefernce Addresses pi + 0, pi + 1, pi + 2 and print the values
  //    Compare this with previous output at step 3)
  //    ai[0] == *(pi + 0), ai[1] == *(pi + 1), ai[2] == *(pi + 2)



    // We will interchange the notations used for arrays and pointers
    // [] notation will be used on pi
    // * Dereference notation will be used on ai

  // 10) Derefernce Addresses ai + 0, ai + 1, ai + 2 and print the values
  //    Compare this with previous output at step 3)


  // 11) We will access values using pi[0], pi[1], pi[2]. This array style of accessing
  //     and we are using this on pointers

}
