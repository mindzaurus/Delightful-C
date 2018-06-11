
#include <stdio.h>

extern int current_queue_length_statik;

void add_to_queue_bad_call() // bogus and wrong
{
  current_queue_length_statik++; // add +1 to current value
  printf("items in queue %d \n", current_queue_length_statik);
}
