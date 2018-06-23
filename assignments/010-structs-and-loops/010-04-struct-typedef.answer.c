/*
  TYPEDEF USAGE ON STRUCT - WEATHER_INFO AND VIDEO_INFO
  1) Declare a struct _wi with fields
     string station_name and float temperature
  2) typedef _wi to weather_info
  3) Declare a typedefed struct _vi with fields
     string video_name and int five_star_rating
     typedefed name should be video_info
  4) Inside main declare a variable weather1 of type weather_info
  5) Declare variable video1 of type video_info
  6) In variable weather1 set the station_name to "Timbuktu" and temperature as 31.4
  7) In variable video1 set the video_name as "The Lion King" and five_star_rating as 5
  8) Print all the fields of weather1
  9) Print all the fields of video1
*/

#include <stdio.h>

// 1) Declare a struct _wi with fields
//    string station_name and float temperature
struct _wi
{
  char * station_name;
  float temperature;
};

// 2) typedef _wi to weather_info
typedef struct _wi weather_info;

// 3) Declare a typedefed struct _vi with fields
//    string video_name and int five_star_rating
//    typedefed name should be video_info
typedef struct _vi
{
  char * video_name;
  int five_star_rating;
} video_info;

int main()
{
  // 4) Inside main declare a variable weather1 of type weather_info
  weather_info weather1;

  // 5) Declare variable video1 of type video_info
  video_info video1;

  // 6) In variable weather1 set the station_name to "Timbuktu" and temperature as 31.4
  weather1.station_name = "Timbuktu";
  weather1.temperature = 31.4;

  // 7) In variable video1 set the video_name as "The Lion King" and five_star_rating as 5
  video1.video_name = "The Lion King";
  video1.five_star_rating = 5;

  // 8) Print all the fields of weather1
  printf("Weather information: station name = %s, temperature = %f \n",
    weather1.station_name, weather1.temperature);

  // 9) Print all the fields of video1
  printf("Video information: video name = %s, five star rating = %d \n",
    video1.video_name, video1.five_star_rating);
}


//
