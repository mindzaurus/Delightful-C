
#include <stdio.h>

int main()
{
  int integer_array[5]; // array to hold 5 elements

  // good access
  integer_array[ 0 ] = 20; // access first element note index is 0
  integer_array[ 1 ] = 34;
  integer_array[ 2 ] = 84;
  integer_array[ 3 ] = 47474;
  integer_array[ 4 ] = -2; // access last / 5th element index is 4 and NOT 5


  printf(" 1st element %d\n 2nd element %d\n 3rd element %d\n 4th element %d\n 5th element %d\n",
  integer_array[ 0 ], integer_array[ 1 ], integer_array[ 2 ], integer_array[ 3 ]
  , integer_array[ 4 ]);

#if 0 // code between #if 0 and the corresponding #endif will not be compiled
  // bad access DON'T do this
  integer_array[ -1 ] = 829292; // here index < 0
  integer_array[ 5 ] = -88; // here index > 4, for 5 element array 4 is the maximum possible index
#endif
}
