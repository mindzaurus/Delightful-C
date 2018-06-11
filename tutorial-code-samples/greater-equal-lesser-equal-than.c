
      #include <stdio.h>

      void greater_than_equal_lesser_than_equal( int x )
      {
        printf("Checking %d \n", x);


        if (x >= 100)
        { // check passes evaluates to true
          printf(" x is greater than 100 or equal to 100 \n");
        }
        else
        { // check fails evaluates to false
          printf(" x is lesser than 100 \n");
        }



        if(x <= 30)
        { // check passes evaluates to true
          printf(" x is lesser than 30 or equal to 30 \n");
        }
        else
        { // check fails evaluates to false
          printf(" x is greater than 30 \n");
        }
        printf("\n\n");
      }

      int main()
      {
        greater_than_equal_lesser_than_equal(99); // will fail >= check
        greater_than_equal_lesser_than_equal(100); // will pass >= check
        greater_than_equal_lesser_than_equal(101); // will pass >= check

        greater_than_equal_lesser_than_equal(29); // will fail <= check
        greater_than_equal_lesser_than_equal(30); // will pass <= check
        greater_than_equal_lesser_than_equal(31); // will pass <= check
      }
