
#include <stdio.h>

struct demo_struct
{
  char c[400]; // 400 bytes
  int k;       // 4 bytes
  float f;     // 4 bytes
  double dbl;  // 8 bytes
}; // total 416 bytes

// Takes a struct by value as arg and
// Returns a struct by value as return value
struct demo_struct
	struct_by_value_returner(struct demo_struct des)
{
  return des;
}

void struct_by_value_passer()
{
  struct demo_struct des;// create struct
  // struct passed by value
  struct demo_struct _ignore = struct_by_value_returner(des);

}

int main()
{
	size_t sz = sizeof(struct demo_struct);
	printf(" sizeof(struct demo_struct) %lu \n", sz);
}

//
