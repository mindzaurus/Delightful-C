
// these two define dont take arguments
#define MAX_BYTES 255
#define ENTRY_POINT_FOR_C main

// the following define takes two arguments X and Y
#define SUM(X, Y) ( (X) + (Y) )

int ENTRY_POINT_FOR_C ()
{
  int num = MAX_BYTES ;
  num = SUM(num, 5);
}
