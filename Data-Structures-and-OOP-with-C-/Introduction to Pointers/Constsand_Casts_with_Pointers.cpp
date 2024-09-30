#include <iostream>

using namespace std;

int main()
{
  // Define a character array (C-style string)
  char c[]{"hallo"}; // The string is mutable because it is stored as an array

  // Declare a constant pointer to the array
  char *const cp1{c}; // Constant pointer: The pointer cannot change, but the value it points to can be changed
  *cp1 = 'H';         // Modifying the first character of the string ('h' -> 'H')

  // Declare a pointer to constant data, meaning the data it points to cannot be modified
  const char *ptc = const_cast<const char *>(cp1); // Casting cp1 to a pointer to constant
  ptc++;                                           // The pointer can move to the next character ('e'), but the data cannot be changed

  // Cast the constant pointer back to a regular pointer to modify the data
  char *const cp2 = const_cast<char *const>(ptc); // Constant pointer to char, can change data but not the pointer itself
  *cp2 = 'e';                                     // Changing the second character ('e' -> 'a'), so "Hello" becomes "Hello"

  // Display the modified string
  cout << "Modified string: " << c << endl; // Output should be "Hello"

  return 0;
}
