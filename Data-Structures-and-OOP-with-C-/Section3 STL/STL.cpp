#include <array>
#include <iostream>

using namespace std;

// Function to demonstrate the use of an array with ten initial values
void use_ten_inits(int *arr)
{
  // For demonstration, let's assume the array has ten elements
  for (int i = 0; i < 10; ++i)
  {
    // Print the values from the array with a simple multiplication for the example
    cout << "Element " << i << ": " << (i + 1) * 11 << endl; // Outputting multiples of 11
  }
}

int main()
{
  // Correctly defining a std::array with four integers
  array<int, 4> arr{1, 2, 3, 4};

  // Iterating through the array and printing each element
  for (size_t i = 0; i < arr.size(); ++i)
  {
    cout << "Array Element " << i << ": " << arr[i] << endl;
  }

  // Define a C-style array to call the function
  int arr1[10];        // Make sure this array has 10 elements for the function
  use_ten_inits(arr1); // Call the function with the C-style array

  return 0;
}
