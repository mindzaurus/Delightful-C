/*
  UNDERSTANDING STRUCT ARRAYS AND STRUCT POINTERS - WEATHER STATION ARRAY AND POINTER TO IT
  1) Write a print_weather_info_by_value function which prints the weather_station_id and temperature
     return type should be void and should take an argument of type weather_info
     Use the dot operator to print the fields of struct
  2) Write a print_weather_info_by_reference function which prints the weather_station_id and temperature
     return type should be void and should take an argument of type pointer to weather_info
     Use the arrow operator -> to print the fields of struct. Also print pointer argument value
  3) Inside main function declare a pointer to struct weather_info, name this as wi_ptr
     initialize this to NULL
  4) Inside main function declare a weather_info array with 3 elements in it,
     use curly brace initializer to initialize values, name array as winfo_arr
  5) Initialize data as follows
     element 1: weather_station_id = 392081,temperature = 23.42
     element 2: weather_station_id = 455761,temperature = 3.91
     element 3: weather_station_id = 929733,temperature = 27.65
  6) Print all three elements of array winfo_arr using print_weather_info_by_value function
  7) Print first element of array winfo_arr using print_weather_info_by_reference function
     pass the address of first element, use & address operator on array element
  8) Set the pointer wi_ptr to point to the address of the array winfo_arr
  9) Using pointer (wi_ptr + offset) style of pointer adjustment print second and third elements of
     winfo_arr using print_weather_info_by_reference function
*/

#include <stdio.h>

typedef struct wi
{
  int weather_station_id;
  float temperature;
} weather_info;

// 1) Write a print_weather_info_by_value function which prints the weather_station_id and temperature
//    return type should be void and should take an argument of type weather_info
void print_weather_info_by_value(weather_info winf)
{
  printf("station id: %d temperature: %f \n",
    winf.weather_station_id, winf.temperature);
}

// 2) Write a print_weather_info_by_reference function which prints the weather_station_id and temperature
//    return type should be void and should take an argument of type pointer to weather_info
//    Use the arrow operator -> to print the fields of struct. Also print pointer argument value
void print_weather_info_by_reference(weather_info * winf_ptr)
{
  printf("winf_ptr %p stationid: %d temperature: %f \n",
    winf_ptr, winf_ptr->weather_station_id, winf_ptr->temperature);
}

int main()
{
  // 3) Inside main function declare a pointer to struct weather_info, name this as wi_ptr
  //    initialize this to NULL
  weather_info * wi_ptr = NULL;

  // 4) Inside main function declare a weather_info array with 3 elements in it,
  //    use curly brace initializer to initialize values, name array as winfo_arr
  weather_info
    winfo_arr[3] =
      {
        // 5) Initialize data as follows
        //    element 1: weather_station_id = 392081,temperature = 23.42
        //    element 2: weather_station_id = 455761,temperature = 3.91
        //    element 3: weather_station_id = 929733,temperature = 27.65
        { 392081, 23.42 },
        { 455761, 3.91  },
        { 929733, 27.65 }
      } ;

  // 6) Print all three elements of array winfo_arr using print_weather_info_by_value function
  print_weather_info_by_value(winfo_arr[0]);
  print_weather_info_by_value(winfo_arr[1]);
  print_weather_info_by_value(winfo_arr[2]);

  printf ("\n\n"); // don't remove this line retain this

  // 7) Print first element of array winfo_arr using print_weather_info_by_reference function
  //   pass the address of first element, use & address operator on array element
  print_weather_info_by_reference(&winfo_arr[0]);

  // 8) Set the pointer wi_ptr to point to the address of the array winfo_arr
  wi_ptr = winfo_arr; //   wi_ptr = &winfo_arr also is fine

  // 9) Using pointer (wi_ptr + offset) style of pointer adjustment print second and third elements of
  //   winfo_arr using print_weather_info_by_reference function
  print_weather_info_by_reference( wi_ptr + 1 );
  print_weather_info_by_reference( wi_ptr + 2 );

}

//
