#include <iostream>
using namespace std;

int main()
{
  // Dynamically allocate memory for a single integer, without initialization
  int *p = new int; // Memory is allocated, but *p contains garbage value

  // Dynamically allocate memory and initialize it with the value 24
  int *p1 = new int(24); // Memory allocated and *p1 is set to 24

  // Dynamically allocate memory and initialize another pointer with the value 24
  int *p2 = new int(24); // Memory allocated and *p2 is set to 24

  // Display the value pointed to by p1
  cout << "Value at p1: " << *p1 << endl;

  // Compare the two pointers to check if they point to the same memory
  if (p1 == p2)
    cout << "p1 and p2 point to the same memory address." << endl;
  else
    cout << "p1 and p2 point to different memory addresses." << endl;

  // Clean up the dynamically allocated memory
  delete p;  // Deallocate the memory allocated to p
  delete p1; // Deallocate the memory allocated to p1
  delete p2; // Deallocate the memory allocated to p2

  return 0;
}
