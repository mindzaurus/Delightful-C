
#include <stdio.h>

// can be accessed anywhere from inside top-level-static.c
static int current_queue_length_statik = 0;

void add_to_queue()
{
  current_queue_length_statik++; // add +1 to current value
  printf("items in queue %d \n", current_queue_length_statik);
}

int main()
{
  add_to_queue();
  add_to_queue();
  add_to_queue();
}
