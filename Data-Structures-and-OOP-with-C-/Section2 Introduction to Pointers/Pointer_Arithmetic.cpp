#include <iostream>
using namespace std;

int main()
{
  // Initialize an array of 5 integers
  int a[]{1, 2, 3, 4, 5};

  // Pointer to the start of the array
  int *pa = a;

  // Loop through the array and multiply each element by 3
  for (int i = 0; i < 5; ++i)
  {
    *pa++ *= 3; // Dereference and update the value, then move the pointer to the next element
  }

  // Move the pointer forward by 1 position (skip the first element)
  pa += 1;

  // The following lines are commented out to demonstrate pointer operations and potential errors
  // a += 1; // Error: You cannot increment the array name 'a', because it's a constant pointer

  // Uncomment these lines to manipulate the array through the pointer
  // *pa = 11;        // Set the second element (a[1]) to 11
  // a[1] = 12;       // Update the second element of the array to 12
  // pa[2] = 13;      // Set the fourth element (a[3]) to 13 using pointer indexing
  // *(pa + 3) = 14;  // Set the fifth element (a[4]) to 14 using pointer arithmetic

  // The final array state would be: {3, 12, 13, 14, 5} if you uncomment the above lines

  return 0;
}
