#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  // Declare an integer variable 'original' and initialize it to 100
  int original = 100;

  // Declare a reference variable 'original_ref' that refers to 'original'
  int &original_ref = original;

  // Print the value of 'original' using printf with correct formatting
  printf("original: %d\n", original);

  // Print the value of the reference 'original_ref' (which is the same as 'original')
  printf("reference: %d\n", original_ref);

  // Declare a new integer 'new_value' and assign it a value of 200
  int new_value = 200;

  // Assign the new value to the reference, which will also update 'original'
  original_ref = new_value;

  // Print the updated value of 'original'
  printf("original: %d\n", original);

  // Print the value of 'new_value'
  printf("new_value: %d\n", new_value);

  // Print the updated value of the reference 'original_ref', which should be the same as 'original'
  printf("reference: %d\n", original_ref);

  return 0;
}
