
#include <stdio.h>
#include <stdlib.h>

typedef struct _product
{
  int id; // product id
  float price; // selling price
} product;

// we will not initialize we will set this in code using assignment operator
product top_seller; // = { 501873, 93.60 } ;

// People don't leave any space between arrow operator its written as
// product_pointer->id  not as product_pointer -> id
void struct_pointer_user()
{
  product * product_pointer = &top_seller;

  (*product_pointer).id = 501873; // use dot notation like (*ptr).member
  // let us use the arrow operator now
  product_pointer->id = 501873; // same as (*product_pointer) .id = 501873;
  // let us set price
  product_pointer->price = 93.60; // arrow operator is the most commonly used

  printf("Top seller product id %d selling price %f\n",
    product_pointer->id , product_pointer->price);

  // Let us try some dynamic allocation
  product_pointer = (product *) malloc ( sizeof ( product ));
  product_pointer->id = 839392;
  product_pointer->price = 23.65;

  printf("Deal of the day product id %d selling price %f\n",
    product_pointer->id , product_pointer->price);

  free(product_pointer); // we can free this like other pointers too
}

int main()
{
  struct_pointer_user();
}
