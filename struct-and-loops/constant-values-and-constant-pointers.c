
/*
  There are 3 types of pointer related
  constants which C const keyword can provide

  1) constant values, but pointers can be modified
  2) constant pointers, but values can be modified
  3) constant pointer, constant values values and pointers can't be modified
*/

void pointers_and_const ()
{
  int val = 23, t =  0;

  // 1) constant values, but pointers can be modified
  {
    // const int *, int const * are the same
    const int * variable_ptr_const_value1 = &val;

    int const * variable_ptr_const_value2 = &val;

    t = *variable_ptr_const_value1; // reading value is ok
    t = *variable_ptr_const_value2; // reading value is ok

    variable_ptr_const_value1 += 1; // pointer arithmetic is ok
    variable_ptr_const_value2 += 1; // pointer arithmetic is ok

    *variable_ptr_const_value1 += 1; // modifying value is error
    *variable_ptr_const_value2 += 1; // modifying value is error
  }

  // 2) constant pointers, but values can be modified
  {
    int * const const_ptr_variable_value1;

    t = *const_ptr_variable_value1;  // reading a value is ok
    *const_ptr_variable_value1 += 1; // modifying value is ok

    const_ptr_variable_value1 += 1;  // pointer arithmetic is error not ok
  }

  // 3) constant pointer, constant values: values and pointers can't be modified
  {
    // const int * const, int const * const are the same
    const int * const const_ptr_const_value1 = &val;
    int const * const const_ptr_const_value2 = &val;

    t = *const_ptr_const_value1; // reading a value is ok
    t = *const_ptr_const_value2; // reading a value is ok

    *const_ptr_const_value1 += 1; // modifying values is an error
    *const_ptr_const_value2 += 1; // modifying values is an error

    const_ptr_const_value1 += 1; // modifying pointer is an error
    const_ptr_const_value2 += 1; // modifying pointer is an error
  }
}


int main()
{

}
















///
