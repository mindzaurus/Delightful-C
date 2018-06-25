/*
      UNDERSTANDING UNIONS IN C - ANONYMOUS AND NAMED UNIONS

  1)  Declare a typedefed struct with following fields
      STATION_ID_TYPE id_type
      Unnamed or anonymous union inside the struct with fields, either numerical id or name can be used
      int weather_station_id, char * weather_station_name
      float temperature
      typedef the struct to name weather_info_with_internal_union

  2)  Write a function print_internal_union_struct which will print all
      fields of struct weather_info_with_internal_union including the union fields
      This function will not return any value and accept an argument
      of type weather_info_with_internal_union
  3)  Inside function print_internal_union_struct  ased on the correct
      STATION_ID_TYPE either a int id string name is to be printed
  4)  Declare a typedefed union with fields int id, char * name, typedef as weather_station
  5)  Declare a typedefed struct with following fields
      STATION_ID_TYPE id_type
      Named union type weather_station represented by field weather_station
      float temperature
      typedef the struct to name weather_info_with_external_union
  6)  Write a function print_external_union_struct which will print
      fields of struct weather_info_with_external_union including the union fields
      This function will not return any value and accept an argument
      of type weather_info_with_external_union
  7)  Inside function print_external_union_struct  ased on the correct
      STATION_ID_TYPE either a int id string name is to be printed
  8) Inside main declare two variables winfo_1 and winfo_2 of type weather_info_with_internal_union
  9) Inside main declare two variables winfo_3 and winfo_4 of type weather_info_with_external_union
 10) Set the fields of winfo_1 to id_type = STRING_ID,
     weather_station_name = "Dublin", temperature = 26.73
 11) Set the fields of winfo_2 to id_type = INTEGER_ID,
     weather_station_id = 146523, temperature = 31.20
 12) Print winfo_1 and winfo_2 using function print_internal_union_struct
 13) Set the fields of winfo_3 to id_type = STRING_ID,
     station.name = "Bangkok", temperature = 29.87
 14) Set the fields of winfo_4 to id_type = STRING_ID,
     station.id = 332179, temperature = 38.61
 15) Print winfo_3 and winfo_4 using function print_external_union_struct
*/

#include <stdlib.h>
#include <stdio.h>

typedef enum sit
{
  INTEGER_ID,
  STRING_ID
} STATION_ID_TYPE;

// 1)  Declare a typedefed struct with following fields
//     STATION_ID_TYPE id_type
//     Unnamed or anonymous union inside the struct with fields, either numerical id or name can be used
//     int weather_station_id, char * weather_station_name
//     float temperature
//     typedef the struct to name weather_info_with_internal_union
typedef struct wiwiu
{
  STATION_ID_TYPE id_type;
  union
  {
    int weather_station_id;
    char * weather_station_name;
  };
  float temperature;
} weather_info_with_internal_union;

// 2)  Write a function print_internal_union_struct which will print all
//     fields of struct weather_info_with_internal_union including the union fields
//     This function will not return any value and accept an argument
//     of type weather_info_with_internal_union
void print_internal_union_struct(weather_info_with_internal_union winfo)
{
  // 3)  Inside Based function print_internal_union_struct on the correct
  //     STATION_ID_TYPE either a int id string name is to be printed
  if(winfo.id_type == INTEGER_ID)
    printf("weather_station_id: %d, ", winfo.weather_station_id);
  else if(winfo.id_type == STRING_ID)
    printf("weather_station_name: %s, ", winfo.weather_station_name);

  printf("temperature: %f \n", winfo.temperature);
}

// 4)  Declare a typedefed named union with fields int id, char * name, typedef as weather_station
typedef union wstn
{
  int id;
  char * name;
} weather_station;

// 5)  Declare a typedefed struct with following fields
//     STATION_ID_TYPE id_type
//     Named union type weather_station represented by field weather_station
//     float temperature
//     typedef the struct to name weather_info_with_external_union
typedef struct wiweu
{
  STATION_ID_TYPE id_type;
  weather_station station;
  float temperature;
} weather_info_with_external_union;

// 6)  Write a function print_external_union_struct which will print
//     fields of struct weather_info_with_external_union including the union fields
//     This function will not return any value and accept an argument
//     of type weather_info_with_external_union
void print_external_union_struct(weather_info_with_external_union winfo)
{
  // 7)  Inside function print_external_union_struct  ased on the correct
  //     STATION_ID_TYPE either a int id string name is to be printed
  if(winfo.id_type == INTEGER_ID)
    printf("station.id: %d, ", winfo.station.id);
  else if(winfo.id_type == STRING_ID)
    printf("station.name: %s, ", winfo.station.name);

  printf("temperature: %f \n", winfo.temperature);
}

int main()
{
  // 8) Inside main declare two variables winfo_1 and winfo_2 of type weather_info_with_internal_union
  weather_info_with_internal_union winfo_1;
  weather_info_with_internal_union winfo_2;

  // 9) Inside main declare two variables winfo_3 and winfo_4 of type weather_info_with_external_union
  weather_info_with_external_union winfo_3;
  weather_info_with_external_union winfo_4;

  // 10) Set the fields of winfo_1 to id_type = STRING_ID,
  //     weather_station_name = "Dublin", temperature = 26.73
  winfo_1.id_type = STRING_ID;
  winfo_1.weather_station_name = "Dublin";
  winfo_1.temperature = 26.73;

  // 11) Set the fields of winfo_2 to id_type = INTEGER_ID,
  //     weather_station_id = 146523, temperature = 31.20
  winfo_2.id_type = INTEGER_ID;
  winfo_2.weather_station_id = 146523;
  winfo_2.temperature = 31.20;

  // 12) Print winfo_1 and winfo_2 using function print_internal_union_struct
  print_internal_union_struct(winfo_1);
  print_internal_union_struct(winfo_2);

  // 13) Set the fields of winfo_3 to id_type = STRING_ID,
  //     station.name = "Bangkok", temperature = 29.87
  winfo_3.id_type = STRING_ID;
  winfo_3.station.name = "Bangkok";
  winfo_3.temperature = 29.87;

  // 14) Set the fields of winfo_4 to id_type = STRING_ID,
  //     station.id = 332179, temperature = 38.61
  winfo_4.id_type = INTEGER_ID;
  winfo_4.station.id = 332179;
  winfo_4.temperature = 38.61;

  // 15) Print winfo_3 and winfo_4 using function print_external_union_struct
  print_external_union_struct(winfo_3);
  print_external_union_struct(winfo_4);
}
