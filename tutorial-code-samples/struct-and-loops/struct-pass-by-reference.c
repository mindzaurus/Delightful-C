

#include <stdio.h>

typedef struct _product
{
  int id;
  float price;
} product;

product top_seller = { 501873, 93.60 } ;

// argument is taken in as reference
// return value is also a reference

product *
struct_pass_by_reference ( product * pdt  )
{
  return pdt;
}

// Not a great program but will demo pass by refence :-)
int main()
{
  product * p = struct_pass_by_reference( &top_seller );
}


