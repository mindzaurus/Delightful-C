
#include <stdio.h>

#include <unistd.h>

// unsigned int
// sleep(unsigned int seconds);


typedef int (*CALLBACK) (int a, int b);


int add(int a, int b)
{
  return a + b;
}

void pass_execution_to_another_owner(CALLBACK cb, int x, int y)
{
  printf("I will sleep for 3 seconds only then I will "
         "continue at my convenient time\n");

  sleep(3); // other owner is a little lazy guy

  int r = cb(x, y);
  printf("Back from sleep and result is %d \n", r);
}

int main()
{
  int (*callback_pointer) (int a, int b);
  callback_pointer = &add;
  pass_execution_to_another_owner(callback_pointer, 35, 45);
}
