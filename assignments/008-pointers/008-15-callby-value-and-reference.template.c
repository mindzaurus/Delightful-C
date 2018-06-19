/*
  UNDERSTANDING CALL BY VALUE AND REFERENCES -
      MULTIPLY BY ACCESSNG PASSED VALUES AND CONTENTS OF MEMORY LOCATIONS

                                    PART 1
  1) Write a function multiply_passed_by_value which takes two argument x and y.
     Both x and y are of type int. Multiply x and y and return the resulting int
  2) After Multiplication is done in multiply_passed_by_value, set x and y to -1

                                    PART 2
  3) Write a function multiply_passed_by_references which takes in three arguments
     x_ptr, y_ptr and result_ptr.  x_ptr, y_ptr and result_ptr should be arguments
     of type pointer to int. multiply_passed_by_references doesn't return any value
  4) In Function  multiply_passed_by_references contents of memory locations
     pointed by x_ptr and y_ptr should be multiplied together and result should be
     stored in the memory location pointed by the pointer result_ptr.

     Note for caller of multiply_passed_by_references:
     When calling multiply_passed_by_references x_ptr and y_ptr should be addresses
     of memory locations which contain int values to be multiplied together.
     Also caller should provide the memory location to multipied result

  5) After multiplication is done set the values of memory locations pointed by
     x_ptr and y_ptr to -1

                                    PART 3
  6) Declare int _x and assign a value of 11
  7) Declare int _y and assign a value of 3
  8) Declare int _result and assign a value of 0

                                    PART 4
  9) Call function multiply_passed_by_value passing _x and _y as arguments, store the
     returned value from the function in _result
 10) Print the value of _result, this should be 33
 11) Print the value of _x and _y, this should be 11 and 3 respectively

                                    PART 5
 12) Call function multiply_passed_by_references passing addresses of _x, _y and _result
     as arguments
 13) Print the value of _result, this should be 33
 14) Print the value of _x and _y, this should be -1 and -1 respectively, This happened
     because we passed the memory location of values. Be careful when you pass by references
     original content could be lost
*/

#include <stdio.h>

                                  // PART 1
// 1) Write a function multiply_passed_by_value which takes two argument x and y.
// Both x and y are of type int. Multiply x and y and return the resulting int

{ // Begin Function multiply_passed_by_value

  // Multiply x and y

  // 2) After Multiplication is done in multiply_passed_by_value, set x and y to -1

  // return the resulting int

} // End Function multiply_passed_by_value

                                // PART 2
// 3) Write a function multiply_passed_by_references which takes in three arguments
// x_ptr, y_ptr and result_ptr.  x_ptr, y_ptr and result_ptr should be arguments
// of type pointer to int. multiply_passed_by_references doesn't return any value

{ // Begin Function multiply_passed_by_references
  // 4) In Function  multiply_passed_by_references contents of memory locations
  //    pointed by x_ptr and y_ptr should be multiplied together and result should be
  //    stored in the memory location pointed by the pointer result_ptr.


  // 5) After multiplication is done set the values of memory locations pointed by
  //    x_ptr and y_ptr to -1

} // End Function multiply_passed_by_references

int main()
{
                                //   PART 3
  // 6) Declare int _x and assign a value of 11


  // 7) Declare int _y and assign a value of 3


  // 8) Declare int _result and assign a value of 0


                                //   PART 4
  // 9) Call function multiply_passed_by_value passing _x and _y as arguments, store the
  // returned value from the function in _result

  // 10) Print the value of _result, this should be 33


  // 11) Print the value of _x and _y, this should be 11 and 3 respectively


  _result = 0; // Don't delete this line retain this

                                //   PART 5
  // 12) Call function multiply_passed_by_references passing addresses of _x, _y and _result
  // as arguments


  // 13) Print the value of _result, this should be 33


  // 14) Print the value of _x and _y, this should be -1 and -1 respectively, This happened
  // because we passed the memory location of values. Be careful when you pass by references
  // original content could be lost

}

//
