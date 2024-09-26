#include <iostream>
using namespace std;

// & - address-of operator (used to get the memory address of a variable)
// * - dereference operator (used to access the value stored at the memory address)

int main()
{
  int a = 92;
  cout << a << endl; // Prints the initial value of 'a'

  int *pi{&a}; // Pointer 'pi' is initialized to the address of 'a'
  *pi = 600;   // The value at the address 'pi' is pointing to is changed to 600

  cout << "Size of int pointer: " << sizeof(int *) << " bytes" << endl;
  cout << a << endl; // Prints the updated value of 'a'

  return 0;
}
