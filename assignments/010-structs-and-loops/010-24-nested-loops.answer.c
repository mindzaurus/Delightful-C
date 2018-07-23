/*
  UNDERSTANDING NESTED LOOPS - Generating two numbers 'x and y'
  1) Inside main function print numbers in the form
     1 and 1
     1 and 2
        :
        :
        :
        .
     3 and 5
     You can see this as printing numbers 11 to 35 but with a 'and' in between
     Use a nested loop to generate this number combination
     Don't print any 0 value
  2) Use two loops which one of them nested inside the other loop
     Use  if continue and break statements to control numbers printed
*/

#include <stdio.h>

/*
  1) Inside main function print numbers in the form
     1 and 1
     1 and 2
        :
        :
     2 and 1
     2 and 2
        :
        .
     3 and 5

  You can see this as printing numbers 11 to 35 but with a 'and' in between
  Use a nested loop to generate this number combination
  Don't print any 0 value
*/

int main()
{
  // 2) Use two loops which one of them nested inside the other loop
  //    use  if continue and break statements to control numbers printed
  int i = 1, j = 1;

  for (i=0; i<=9; i++) {

      if(i==0)
          continue;

      if(i>3)
          break;

      for(j=0; j<=9; j++) {
          if(j == 0)
              continue;

          if(i == 3 && j > 5)
              break;

          printf("%d and %d\n", i, j);
      }

  }
}



















//
