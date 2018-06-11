#include <stdio.h>
#include <stdlib.h>

void check_3d_array_bounds()
{
  int THIRD_DIM = 5, SECOND_DIM = 4, FIRST_DIM = 3;
  size_t NUM_ELEMENTS = THIRD_DIM * SECOND_DIM * FIRST_DIM;
  size_t total_bytes_required = sizeof(int) * NUM_ELEMENTS;

  int * p = (int *) malloc ( total_bytes_required );
  // declare a 3d array handle to use for e.g array_3d [ 2 ] [ 1 ] [ 0 ]
  int (* array_3d) [SECOND_DIM] [FIRST_DIM]; // leave out last dimension THIRD_DIM

  printf("Valid bounds for allocated memory \n\t should >= %p and <= %p \n", p, p + NUM_ELEMENTS -1);
  array_3d = (void *) p;

  // highest possible:
  // THIRD_DIM == 4, SECOND_DIM == 3, FIRST_DIM == 2
  int *k = &array_3d [4] [3] [2];
  printf("address k %p\n", k);

  unsigned long long diff = (unsigned long long) k - (unsigned long long) p;
  printf("\n offset in bytes %lld, offset in int %lld\n", diff, diff/(sizeof(int)));


  // from now you can use the array_3d[0][1][2] style array handles
  // use the same techinque for higher dimensions as well
}

int main()
{
  check_3d_array_bounds();
}
