/*
  UNDERSTANDING THE DO WHILE LOOP - NUMBER PRINTER

    1) Write a function simple_do_while_loop with a do while loop
       Initialize int i = 0
       do while loop should terminate when i becomes greater than 5
       Inside do while loop, print value of i
       Remember to stop the loop by incrementing variable i correctly, if you don't
       increment the value of i you will get an infinite loop

    2) Write a function simple_do_while_loop_with_break with a do while loop
       Initialize int i = 0
       do while loop should terminate when i becomes greater than 5
       Inside do while loop, print value of i
       Remember to stop the loop by incrementing variable i correctly, if you don't
       increment the value of i you will get an infinite loop
    3) INSIDE DO WHILE LOOP OF simple_do_while_loop_with_break IF THE VALUE OF
       VARIABLE i BECOMES EQUAL TO break_count THEN BREAK OUT OF THE LOOP
       Initial value of break_count is already set to 55

    4) Write a function simple_do_while_loop_with_continue with a do while loop
       Initialize int i = 0
       do while loop should terminate when i becomes greater than 5
       Inside do while loop, print value of i
       Remember to stop the loop by incrementing variable i correctly, if you don't
       increment the value of i you will get an infinite loop
    5) INSIDE DO WHILE LOOP OF simple_do_while_loop_with_continue IF THE VALUE OF VARIABLE i
       BECOMES EQUAL TO skip_value THEN DON'T PRINT THAT VALUE PROCEED TO PRINT NEXT VALUE OF i
       Initial value of skip_value is already set to 55


    6) Call the function simple_do_while_loop you will see a range of values printed

    7) Call the function simple_do_while_loop_with_break you will see a range of values
       printed
    8) Set the break_count variable to a value > 1 and < 5
    9) Call the function simple_do_while_loop_with_break you will see loop breaks when
       value of i is equal to break_count value

   10) Call the function simple_do_while_loop_with_continue will see a range of values
       printed
   11) Set the value of variable skip_value to a value > 1 and < 5
       When condition skip_value == is matched do while loop will skip that iteration
       and continue with the next one, skip_value won't be printed in the printf
   12) Call the function simple_do_while_loop_with_continue will see a range of values
       printed except for the skip_value, it will be skipped
*/

#include <stdio.h>

int break_count = 55;
int skip_value = 55;

// 1) Write a function simple_do_while_loop with a do while loop
//    Initialize int i = 0
//    do while loop should terminate when i becomes greater than 5
//    Inside do while loop, print value of i
//    Remember to stop the loop by incrementing variable i correctly, if you don't
//    increment the value of i you will get an infinite loop
void simple_do_while_loop()
{
  int i = 0;

  do {
    i++;
    printf("simple_do_while_loop i = %d \n", i);
  } while(i <= 5);
}

// 2) Write a function simple_do_while_loop_with_break with a do while loop
//    Initialize int i = 0
//    do while loop should terminate when i becomes greater than 5
//    Inside do while loop, print value of i
//    Remember to stop the loop by incrementing variable i correctly, if you don't
//    increment the value of i you will get an infinite loop
void simple_do_while_loop_with_break()
{
  int i = 0;

  do {
    i++;

    // 3) INSIDE DO WHILE LOOP OF simple_do_while_loop_with_break IF THE VALUE OF
    //    VARIABLE i BECOMES EQUAL TO break_count THEN BREAK OUT OF THE LOOP
    //    Initial value of break_count is already set to 55
    if(i == break_count)
      break;

    printf("simple_do_while_loop_with_break %d \n", i);
  } while(i <= 5);
}

// 4) Write a function simple_do_while_loop_with_continue with a do while loop
//    Initialize int i = 0
//    do while loop should terminate when i becomes greater than 5
//    Inside do while loop, print value of i
//    Remember to stop the loop by incrementing variable i correctly, if you don't
//    increment the value of i you will get an infinite loop
void simple_do_while_loop_with_continue()
{
  int i = 0;

  do {
    i++;

    // 5) INSIDE DO WHILE LOOP OF simple_do_while_loop_with_continue IF THE VALUE OF VARIABLE i
    //    BECOMES EQUAL TO skip_value THEN DON'T PRINT THAT VALUE PROCEED TO PRINT NEXT VALUE OF i
    //    Initial value of skip_value is already set to 55
    if(i == skip_value)
      continue;

    printf("simple_do_while_loop_with_continue %d \n", i);
  } while(i <= 5);
}


int main()
{

  // 6) Call the function simple_do_while_loop you will see a range of values printed
  simple_do_while_loop();

  printf("\n\n"); // don't remove / delete this line, retain this





  // 7) Call the function simple_do_while_loop_with_break you will see a range of values
  //    printed
  simple_do_while_loop_with_break();

  printf("\n\n"); // don't remove / delete this line, retain this

  // 8) Set the break_count variable to a value > 1 and < 5
  break_count = 4;

  // 9) Call the function simple_do_while_loop_with_break you will see loop breaks when
  //    value of i is equal to break_count value
  simple_do_while_loop_with_break();

  printf("\n\n"); // don't remove / delete this line, retain this





  // 10) Call the function simple_do_while_loop_with_continue will see a range of values
  //     printed
  simple_do_while_loop_with_continue();

  printf("\n\n"); // don't remove / delete this line, retain this

  // 11) Set the value of variable skip_value to a value > 1 and < 5
  //     When condition skip_value == is matched do while loop will skip that iteration
  //     and continue with the next one, skip_value won't be printed in the printf
  skip_value = 2;

  // 12) Call the function simple_do_while_loop_with_continue will see a range of values
  //     printed except for the skip_value, it will be skipped
  simple_do_while_loop_with_continue();
}
