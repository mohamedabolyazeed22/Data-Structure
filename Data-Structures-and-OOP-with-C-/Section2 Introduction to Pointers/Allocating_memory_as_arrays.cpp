#include <iostream>
using namespace std;

int main()
{
  // Dynamically allocate memory for an array of 2 integers
  int *p = new int[2];

  // Initialize the array using both direct and pointer arithmetic
  p[0] = 1;     // Assign 1 to the first element of the array
  *(p + 1) = 2; // Assign 2 to the second element using pointer arithmetic

  // Display the contents of the array with additional context
  cout << "Array values:" << endl;
  for (int i = 0; i < 2; i++)
  {
    cout << "Element " << i << ": " << p[i] << endl;
  }

  return 0;
}
