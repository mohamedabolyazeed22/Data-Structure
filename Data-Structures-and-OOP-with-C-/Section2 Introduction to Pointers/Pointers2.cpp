#include <iostream>
using namespace std;

// & - address-of operator (used to get the memory address of a variable)
// * - dereference operator (used to access the value stored at the memory address)

int main()
{
  int myVariable{}; // Declares an integer variable initialized to 0

  printf("My Variable : %d\n", myVariable); // Prints the value of 'myVariable' (default is 0)

  int *myVariable_address = &myVariable; // Declares a pointer that holds the address of 'myVariable'

  printf("&myVariable : %p\n", myVariable_address); // Prints the memory address of 'myVariable' using %p for pointer

  *myVariable_address = 999;
  printf("My Variable : %d\n", myVariable);

  printf("Int : %d", *myVariable_address);

  return 0;
}
