
#include <stdio.h>

typedef struct _sample_record
{
  unsigned char buffer[247];
  int id;
} record ; // 247 + 4 = 251 bytes is the size you are expecting ? let us see

record rec[4];

int main()
{
  record *first, *second, *third, *last, *ptr ;
  rec[0].id = 0;
  rec[1].id = 1;
  rec[2].id = 2;
  rec[3].id = 3;

  printf("rec[2].id %d \n", rec[2].id);

  first = &rec[0];
  second = &rec[1];
  third = &rec[2];
  last = &rec[3];

  ptr = rec;

  printf("first %p ptr +0 %p\n", first, ptr + 0);
  printf("second %p ptr +1 %p\n", second, ptr + 1);
  printf("third %p ptr +2 %p\n", third, ptr + 2);
  printf("last %p ptr +3 %p\n", last, ptr + 3);

  printf("sizeof(record) %ld \n", sizeof(record));

  unsigned long long v1 = (unsigned long long ) (ptr + 3);
  unsigned long long v2 = (unsigned long long ) (ptr + 2);

  unsigned long long diff = v1 - v2;
  printf("\n bytes offset between 2 array elements of record, diff == %lld \n", diff);

  // When you do pointer arithmetic e.g ptr + 2
  // ptr + 2 * 252 is actually added, if its ptr + 3 then ptr + 3 * 252 is added

}










///
