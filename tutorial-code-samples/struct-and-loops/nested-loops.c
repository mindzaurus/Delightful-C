
#include <stdio.h>

// Nesting a for loop inside another for loop
void nested_loop_1 ()
{
  int i = 0, j = 0;

  for(i = 0; i < 4 ; i++ ) { // Outer loop
    printf("Outer for loop i == %d \n", i);

    for ( j = 0; j < 5; j++ ) { // Inner loop
      printf("\tInner for loop j == %d \n", j);
      printf("\t\ti == %d, j == %d \n", i, j);
    }

  }

}

// Nesting a while loop inside a for loop
void nested_loop_2 ()
{
  int i = 0, j = 0;

  for ( i = 0; i < 4; i++ ) {
    printf("Outer Loop i == %d \n", i);

    j = 0;
    while ( j < 5 ) {
      printf("\tInner Loop j == %d \n", j);
      printf("\t\t i == %d, j == %d \n", i, j);
      j++;
    }
  }

}

// four levels of nested loops
void nested_loop_3() {
  int i=0, j=0, p=0, k=0;

  for(i=0; i<2; i++) { // Outermost loop -> first loop
    for(j=0; j<3; j++) { // 2nd loop
      for(p=0; p<3; p++) { // 3rd loop
        for(k=0; k<3; k++) { // Innermost loop -> fourth loop
          printf("i == %d, j == %d, p == %d, k == %d \n", i, j, p, k);
        }
        printf("\n");
      }
    }
  }
}

int main()
{
  // nested_loop_1();
  // nested_loop_2();
  nested_loop_3();
}
