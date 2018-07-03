/*

  Write a function
    void print_sum_of_rows(int array_2d, int num_rows, int num_cols)
    that prints a row wise sum of a 2d matrix

    Array ar_2d and its dimensions NUM_ROWS, NUM_COLUMNS are predefined use them

IF YOU PASS A 2D MATRIX LIKE SHOWN BELOW

     4 COLUMNS
    --------------------------->
5  | [9]  [10] [11] [8]
   | [7]  [6]  [7]  [8]
R  | [12] [15] [13] [6]
O  | [8]  [9]  [7]  [7]
W  | [10] [8]  [11] [10]
S  |
   V

OUTPUT BY SUMMING  THE ROW ELEMENTS SHOULD BE


     1 COLUMN
     -------->
R    | [38]       == 9 + 10 + 11 + 8
O    | [28]       == 7 + 6 + 7 + 8
W    | [46]       == 12 + 15 + 13 + 6
S    | [31]       == 8 + 9 + 7 + 7
     | [39]       == 10 + 8 + 11 + 10
     V

  LOGIC TO USE:
    Create a result 2d array to hold a 5 rows and 1 column
    Add all elements of a row and store in result array of same row index
    Use for loops

    Passing 2d arrays can be done using declarations like this "int (* array_2d) [NUM_COLUMNS]""
*/

#define NUM_ROWS 5
#define NUM_COLUMNS 4

int ar_2d [NUM_ROWS] [NUM_COLUMNS] =
{
  9, 10, 11, 8,
  7, 6, 7, 8,
  12, 15, 13, 6,
  8, 9, 7, 7,
  10, 8, 11, 10
};

#include <stdio.h>
int get_row_wise_sum(int (*array_2d) [NUM_COLUMNS], int current_row_number);

void print_sum_of_rows(int (* array_2d) [NUM_COLUMNS])
{
  int r = -1;

  for( r = 0; r < NUM_ROWS; r++)
  {
    int v = get_row_wise_sum(array_2d, r );
    printf("%d\n", v);
  }
}

int get_row_wise_sum(int (*array_2d) [NUM_COLUMNS], int current_row_number)
{
  int c = 0;
  int x = 0;

  for(c = 0; c < NUM_COLUMNS; c++)
  {
    x += array_2d [current_row_number] [c];
  }

  return x;
}

int main()
{
  print_sum_of_rows(ar_2d);
}
