/*
  UNDERSTANDING DYNAMIC ALLOCATION OF STRUCT - MALLOC AND FREE FOR STRUCT

  1) Dynamically allocate space for 1000 weather_info elements using malloc
     Store the allocated pointer in a pointer named winfo_ptr
  2) Declare a pointer to weather_info and assign the address of 1000th element
     of dynamically allocated struct, name the pointer as tmp_winfo_ptr
  3) Set the fields of the 1000th element as follows
     weather_station_id = 785943, temperature = 18.57
  4) Using array notation on 2nd element of dynamically allocated struct
     Set the fields as weather_station_id = 655713, temperature = 28.57
  5) Print the 1000th element pointed by the pointer tmp_winfo_ptr using
     the function print_weather_info, pass derefenced tmp_winfo_ptr as argument
  6) Print the 2nd element using the function print_weather_info, pass 2nd element
     as argument using array notation [ ] on winfo_ptr
  7) Free the dynamically allocated memory using free

*/

#include <stdlib.h>
#include <stdio.h>

typedef struct wi
{
  int weather_station_id;
  float temperature;
} weather_info;

void print_weather_info(weather_info winfo)
{
  printf("weather_station_id: %d , temperature: %f \n",
    winfo.weather_station_id, winfo.temperature);
}

int main()
{
  // 1) Dynamically allocate space for 1000 weather_info elements using malloc
  //    Store the allocated pointer in a pointer named winfo_ptr
  weather_info * winfo_ptr = (weather_info *) malloc(sizeof(weather_info) * 1000);

  // 2) Declare a pointer to weather_info and assign the address of 1000th element
  //    of dynamically allocated struct, name the pointer as tmp_winfo_ptr
  weather_info * tmp_winfo_ptr = winfo_ptr + ( 999 );

  // 3) Set the fields of the 1000th element as follows
  //    weather_station_id = 785943, temperature = 18.57
  tmp_winfo_ptr->weather_station_id = 785943;
  tmp_winfo_ptr->temperature = 18.57;

  // 4) Using array notation [ ] on 2nd element of dynamically allocated structs
  //    Set the fields as weather_station_id = 655713, temperature = 28.57
  winfo_ptr[1].weather_station_id = 655713;
  winfo_ptr[1].temperature = 28.57;

  // 5) Print the 1000th element pointed by the pointer tmp_winfo_ptr using
  //    the function print_weather_info, pass derefenced tmp_winfo_ptr as argument
  print_weather_info(*tmp_winfo_ptr);

  // 6) Print the 2nd element using the function print_weather_info, pass 2nd element
  //    as argument using array notation [ ] on winfo_ptr
  print_weather_info(winfo_ptr[1]);

  // 7) Free the dynamically allocated memory using free
  free(winfo_ptr);
}


//
