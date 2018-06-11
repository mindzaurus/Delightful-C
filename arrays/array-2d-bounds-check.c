
#include <stdio.h>
#include <stdlib.h> // malloc

// 2D array matrix 4 x 3
void check_2d_array_bounds()
{
  int SECOND_DIM = 4, FIRST_DIM = 3;

  size_t NUM_ELEMENTS = FIRST_DIM * SECOND_DIM; // total number of elements in matrix
  size_t total_bytes_required = sizeof(int) * NUM_ELEMENTS;

  printf("total_bytes_required %lu \n", total_bytes_required);

  int * p = (int *) malloc( total_bytes_required );
  int (* array_2d) [FIRST_DIM]; // drop the last dimension, this is pointer to an array
  printf("valid address should be >= %p and <= %p\n", p, p + NUM_ELEMENTS -1);

  // array_2d can be used like array handle form array_2d[row] [column]
  array_2d = (void *) p; // grab the pointer allocated
  int * k = &array_2d[3][2]; // highest valid row index is 3 and highest valid column index is 2

  printf("k %p \n", k);

  // diff will give offset in bytes
  unsigned long long diff = (unsigned long long) k - (unsigned long long ) p;
  printf("\noffset in bytes %lld offset in integers %lld\n", diff, diff/(sizeof(int))); //

}

int main()
{
  check_2d_array_bounds();
}
