/*
  UNDERSTANDING STRUCT INTIALIZATION - USING CURLY BRACE INITIALIZERS
  1) Declare a typedefed struct vi and name the typedef as video_info
  2) Declare following fields inside struct vi
     char * name;
     float  price;
     int    rating;
     char * genre;
  3) Inside main declare a variable of type video_info and using curly brace
     initializer for struct initialize the fields of struct video_info to following
     values
     name: "The Lion King"
     price: 1.22
     rating: 5
     genre: "Children Movies"
  4) Print all the fields of video1
*/

#include <stdio.h>

// 1) Declare a typedefed struct vi and name the typedef as video_info
typedef struct vi
{
  // 2) Declare following fields inside struct vi
  //    char * name, float price, int rating, char * genre;
  char * name;
  float  price;
  int    rating;
  char * genre;
} video_info;

int main()
{
  // 3) Inside main declare a variable of type video_info and using curly brace
  //    initializer for struct initialize the fields of struct video_info to following
  //    values
  //    name: "The Lion King"
  //    price: 1.22
  //    rating: 5
  //    genre: "Children Movies"
  video_info video1 = {"The Lion King", 1.22, 5, "Children Movies" };

  // 4) Print all the fields of video1
  printf(" Video name: %s \n", video1.name);
  printf(" Price in dollars: %f \n", video1.price);
  printf(" Video rating: %d \n", video1.rating);
  printf(" Genre of video: %s \n", video1.genre);
}
