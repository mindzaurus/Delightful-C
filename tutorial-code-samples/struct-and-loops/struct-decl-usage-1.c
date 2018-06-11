
#include <stdio.h>

typedef enum _product_category
{
  TOYS,
  BOOKS,
} product_category ;

typedef struct _product_details
{
  int product_id;
  char * product_name;
  product_category category;
  float selling_price;
} product_details;

product_details top_seller;
char * bookname = "C programming language";

void set_struct_member_data()
{
  top_seller.product_id    = 847832; // dot notation
  top_seller.product_name  = bookname;
  top_seller.category      = BOOKS;
  top_seller.selling_price = 8.75;

  printf("product id %d \n", top_seller.product_id);
  printf("product name %s \n", top_seller.product_name);
  printf("category %d \n", top_seller.category);
  printf("selling price %f \n", top_seller.selling_price);
}

int main()
{
  set_struct_member_data();
}
