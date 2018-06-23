/*
  UNDERSTANDING STRUCT PASSBY VALUE AND REFERENCES -
    PASSING WEATHER_INFO STRUCT VALUES AND REFERENCES AROUND

    1) Declare a typedefed struct wi with following fields
       int weather_station_id, float temperature
       typedef the struct as weather_info
    2) Write a function print_weather_info_passed_by_value which will take an
       argument winfo of type weather_info and print all the fields of winfo
    3) Write a function print_weather_info_passed_by_reference which will take an
       argument winfo_ptr of type pointer to weather_info
       and print all the fields of the winfo_ptr
    4) Declare a variable w1 of type weather_info and initialize fields
       weather_station_id to 282610 and temperature to 33.45
    5) Call function print_weather_info_passed_by_value and pass w1 by value
    6) Call function print_weather_info_passed_by_reference and pass w1 by reference
*/

#include <stdio.h>

// 1) Declare a typedefed struct wi with following fields
//    int weather_station_id, float temperature
//    typedef the struct as weather_info
typedef struct wi
{
  int weather_station_id;
  float temperature;
} weather_info;

// 2) Write a function print_weather_info_passed_by_value which will take an
//    argument winfo of type weather_info and print all the fields of winfo
void print_weather_info_passed_by_value(weather_info winfo)
{
  printf("winfo.weather_station_id %d \n", winfo.weather_station_id);
  printf("winfo.temperature %f \n", winfo.temperature);
}

// 3) Write a function print_weather_info_passed_by_reference which will take an
//    argument winfo_ptr of type pointer to weather_info
//    and print all the fields of the winfo_ptr
void print_weather_info_passed_by_reference(weather_info * winfo_ptr)
{
  printf("winfo_ptr->weather_station_id %d \n", winfo_ptr->weather_station_id);
  printf("winfo_ptr->temperature %f \n", winfo_ptr->temperature);
}

int main()
{
  // 4) Declare a variable w1 of type weather_info and initialize fields
  //    weather_station_id to 282610 and temperature to 33.45
  weather_info w1 = { 282610, 33.45 };

  // 5) Call function print_weather_info_passed_by_value and pass w1 by value
  print_weather_info_passed_by_value(w1);

  // 6) Call function print_weather_info_passed_by_reference and pass w1 by reference
  print_weather_info_passed_by_reference(&w1);
}



//
