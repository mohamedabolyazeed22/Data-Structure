#include <cstdio>

// & - address-of operator (used to get the memory address of a variable)
// * - dereference operator (used to access the value stored at the memory address)
// %d is for printing integer values.
// %p is for printing memory addresses (pointers).

int main()
{
  // Commented-out block for reference:
  // int myVariable{};  // Declare an integer variable and initialize it to 0
  // printf("myVariable : %d\n", myVariable);  // Print the initial value of 'myVariable'
  // int *myVariable_address = &myVariable;  // Get the address of 'myVariable'
  // printf("&myVariable : %p\n", myVariable_address);  // Print the memory address
  // *myVariable_address = 995;  // Modify the value of 'myVariable' using its pointer
  // printf("myVariable : %d\n", myVariable);  // Print the modified value of 'myVariable'
  // printf("Int  %d ", *myVariable_address);  // Print the value at the pointer address

  // Actual working block:
  int myAge = 0;               // Declare an integer 'myAge' and initialize it to 0
  int *myAge_address = &myAge; // Get the address of 'myAge' and store it in 'myAge_address'

  // Print the value of 'myAge' using dereferencing of 'myAge_address'
  printf("Value at myAge_address : %d\n", *myAge_address); // Output: 0

  // Print the memory address of 'myAge'
  printf("myAge Address : %p\n", myAge_address); // Prints the memory address of 'myAge'

  // Change the value of 'myAge' using the pointer
  *myAge_address = 1099;

  // Print the updated value of 'myAge' using dereferencing
  printf("Value at myAge_address : %d\n", *myAge_address); // Output: 1099

  // Print the memory address of 'myAge' again (same as before)
  printf("myAge Address : %p\n", myAge_address);

  return 0;
}
