#include <iostream>

using namespace std;

int main()
{
  int arr[]{1, 2, 3, 8}; // Define an array of 4 elements: {1, 2, 3, 4}

  // Loop through the array, but this will result in undefined behavior when i == 3
  for (int i = 0; i < 4; i++) // This loop should ideally stop at i < 3 to avoid out-of-bounds access
  {
    int a = arr[i] += arr[i + 1];                       // Add the current element arr[i] to the next element arr[i + 1] and store the result in arr[i]
                                                        // This can cause an out-of-bounds access when i == 3 (because arr[4] does not exist)
    cout << "Updated arr[" << i << "] = " << a << endl; // Print the updated value of arr[i]
  }

  // Display the final state of the array after modifications
  cout << "Final array state: ";
  for (int i = 0; i < 4; i++) // Loop to print all elements of the array
  {
    cout << arr[i] << " "; // Print each element
  }
  cout << endl;

  return 0;
}
