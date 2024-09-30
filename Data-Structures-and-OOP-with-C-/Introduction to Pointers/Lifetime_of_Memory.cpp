#include <iostream>

using namespace std;

// Function that modifies the integer value pointed to by pInt
int *do_something(int *pInt)
{
  *pInt *= 10; // Multiply the value by 10
  return pInt; // Return the modified pointer
}

int main()
{

  // Dynamically allocate an integer and initialize it with 42 (RAII)
  int *p1 = new int(42);

  // Modify the value of p1 using the function do_something
  int *p2 = do_something(p1);

  // Display the result
  cout << "Modified value: " << *p2 << endl; // Output: 420

  // Clean up dynamically allocated memory
  delete p1; // p1 and p2 point to the same memory, so deleting p1 also deletes p2
  p1 = nullptr;
  p2 = nullptr; // Safely nullify p2 to prevent dangling pointers

  // Demonstrating the next logical step: safe memory handling
  if (!p1 && !p2)
  {
    cout << "Memory has been safely deallocated." << endl;
  }
  else
  {
    cout << "Pointers are not null!" << endl;
  }

  return 0;
}
