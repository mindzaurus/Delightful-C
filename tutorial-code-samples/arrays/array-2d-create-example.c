
#include <stdio.h>
#include <stdlib.h> // malloc

// We will create a 2d array matrix of dimensions 4 x 3
void create_2d_array()
{
  int SECOND_DIM = 4, FIRST_DIM = 3;

  // number of int elements in 2d matrix
  size_t NUM_ELEMENTS = FIRST_DIM * SECOND_DIM;
  size_t total_bytes_required = sizeof(int) * NUM_ELEMENTS;

  int * p = (int *) malloc( total_bytes_required );
  int (* array_2d) [FIRST_DIM]; // pointer to a ARRAY
  array_2d = (void *) p;

  // REST is all fluff below till end of function

  array_2d[0][0] = 4; array_2d[0][1] = 99; array_2d[0][2] = 30;     // ROW 0
  array_2d[1][0] = 6; array_2d[1][1] = 10; array_2d[1][2] = 0;      // ROW 1
  array_2d[2][0] = -5; array_2d[2][1] = 243; array_2d[2][2] = 225;  // ROW 2
  array_2d[3][0] = 16; array_2d[3][1] = 42; array_2d[3][2] = 78;    // ROW 3

  // Let us print some random elements
  printf("array_2d[3][2] %d array_2d[1][1] %d "
         "array_2d[0][1] %d array_2d[2][2] %d \n",
       array_2d[3][2], array_2d[1][1], array_2d[0][1], array_2d[2][2]);
}

int main()
{
  create_2d_array();
}
