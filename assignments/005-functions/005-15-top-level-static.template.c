
/*
  UNDERSTANDING TOP LEVEL STATIC VARIABLES
  1) Declare a int type static variable counter_statik and assign a value 0
  2) Inside main function increment counter_statik
  3) Compile using command
     gcc 005-16-top-level-static.template.c 005-16-companion.c
     You should see an error like this

     Undefined symbols for architecture x86_64:
     "_counter_statik", referenced from:
      _counter_statik_incrementer in 005-16-companion-a3239f.o

  4) In file 005-16-companion.c comment out counter_statik++; to // counter_statik++;
  5) Compile using command
     gcc 005-16-top-level-static.template.c 005-16-companion.c
  6) Run the Program
     You will see output like "counter_statik is = 1"

  This example will clearly demonstrate that top level statics in a file is strictly
  contained within a file and can't be exported like global variables

  top level static variables should be used for variables which needn't be exposed to external files
*/

#include <stdio.h>

// 1) Declare a int type static variable counter_statik


int main()
{
  // 2) Inside main function increment c


  printf("counter_statik is = %d\n", counter_statik);
}
