
#include <string.h>
#include <stdio.h>

int main()
{
  char * s1 = "charlie";
  char s1_clone [ ] = "charlie";

  char * s2 = "charlie\n"; // \n is one extra newline character
  char * s3 = "charlie bit my finger";

  // strlen demo
  {
    printf("length of \"%s\" s1 %lu\n", s1, strlen ( s1 )  );
    printf("length of \"%s\" s2 %lu\n", s2, strlen ( s2 )   ); // s1 length + 1
    printf("length of \"%s\" s3 %lu\n", s3, strlen ( s3 )   ); // longer string than s1&s2
  }

  // strcmp demo
  {
    // compare "charlie" and "charlie" clone string
    printf("\nstrcmp(s1, s1_clone) is %d \n", strcmp(s1, s1_clone));

    // compare "charlie" and "charlie\n" these are different strings won't match
    printf("strcmp(s1, s2) is %d \n", strcmp(s1, s2));

    // compare "charlie" and "jerry"
    printf("strcmp(s1, \"jerry\") is %d \n", strcmp(s1, "jerry"));
  }

  // strcpy demo
  {
    char * s4 = "Delightful C is neat and great";
    size_t s4_len = strlen(s4);

    char s5[s4_len + 1]; // + 1 for '\0' null terminator
    strcpy(s5, s4);

    printf("\nOriginal string s4 at %p  \"%s\" \n", s4, s4);
    printf("Copied string s5 at %p \"%s\" \n", s5, s5);
  }

  // strdup demo
  {
    char * s6 = "Jerry loves cheese";
    char * s7 = strdup(s6);
    
    printf("\nOriginal string s6 at %p  \"%s\" \n", s6, s6);
    printf("Duped string s7 at %p \"%s\" \n", s7, s7);
  }
}
