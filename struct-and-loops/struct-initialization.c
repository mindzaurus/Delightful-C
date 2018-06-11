
#include <stdio.h>

typedef enum _product_category
{
  TOYS,
  BOOKS
} product_category;


// This is better and commonly seen use this approach
typedef struct _product_details
{
  int product_id;
  char * product_name;
  product_category category;
  float selling_price;
} product_details ;

void initialize_top_seller()
{
  // Order of initialization should be same as declaration
  //  1. product_id, 2. product_name, 3. category, 4. selling_price
  // Initialize within { }
  product_details top_seller =
    //{ product_id, product_name, category, selling_price }
      { 843932, "The C Programming Language", BOOKS, 8.75f  };

  printf(" product_id %d\n product_name %s\n category %d\n selling_price %f\n",
          top_seller.product_id, top_seller.product_name,
          top_seller.category, top_seller.selling_price);
}

int main()
{
  initialize_top_seller();
}
