#include <iostream>
using namespace std;

int main()
{
  // Initialize a pointer to int and set it to nullptr (null pointer)
  int *pi = nullptr;

  // Declare an integer variable
  int a = 62;

  // Assign the address of 'a' to the pointer 'pi'
  pi = &a;

  // Check if the pointer 'pi' is not null before dereferencing
  if (nullptr != pi)
  {
    // Dereference the pointer and print the value of 'a'
    cout << *pi << endl;
  }

  // End of the program
  return 0;
}
