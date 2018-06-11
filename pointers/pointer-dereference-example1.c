
#include <stdio.h>

unsigned int old_age = 90;

int main()
{
  unsigned int * old_age_ptr = &old_age; // * is not multiplication here its dereferencing
  printf(" old_age_ptr holds the address %p \n", old_age_ptr);

  unsigned int age = *old_age_ptr; // * is not multiplication here its dereferencing
  printf(" age is %u direct dereference *old_age_ptr %u \n", age, *old_age_ptr);

  old_age = 95;
  printf(" new changed value *old_age_ptr %u \n", *old_age_ptr);
  // We didn't change old_age_ptr but changing old_age affects *old_age_ptr

  *old_age_ptr = 100;
  printf(" new once again changed value old_age %u \n", old_age);
  // We didn't change old_age but changing its memory contents through pointer affects it

}
