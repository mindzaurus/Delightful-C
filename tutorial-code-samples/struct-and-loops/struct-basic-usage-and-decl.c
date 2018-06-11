#include <stdio.h>

typedef enum _product_category
{
  TOYS,
  BOOKS
} product_category;


#ifdef USE_PLAIN_STRUCT

struct product_details
{
  int product_id;
  char * product_name;
  product_category category;
  float selling_price;
};

struct product_details top_seller;

#else // typedefed version

// This is better and commonly seen use this approach
typedef struct _product_details
{
  int product_id;
  char * product_name;
  product_category category;
  float selling_price;
} product_details ;

product_details top_seller;

#endif // USE_PLAIN_STRUCT



char * book_name = "The C Programming Language";

void set_top_seller_product_details()
{
  top_seller.product_id = 849283; // dot notation structvar.member
  top_seller.product_name = book_name;
  top_seller.category = BOOKS;
  top_seller.selling_price = 8.75;

  printf ("product id %d \nproduct name %s \ncategory %d \nselling price %f \n",
    top_seller.product_id, top_seller.product_name,
    top_seller.category, top_seller.selling_price);
}

int main()
{
  set_top_seller_product_details();
}
