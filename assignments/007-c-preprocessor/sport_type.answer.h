
// 8) Add header guards in sport_type.h and compile again, compilation should succeed now
#ifndef SPORT_TYPE_H
#define SPORT_TYPE_H

// 1) Declare a header (.h file) by name sport_type.h
// 2) Define and typedef an enum SPORT_TYPE in the sport_type.h with categories
//    INDOOR, OUTDOOR and UNKNOWN
typedef enum {
  INDOOR,
  OUTDOOR,
  UNKNOWN
} SPORT_TYPE;

// 8) Add header guards in sport_type.h and compile again, compilation should succeed now
#endif
