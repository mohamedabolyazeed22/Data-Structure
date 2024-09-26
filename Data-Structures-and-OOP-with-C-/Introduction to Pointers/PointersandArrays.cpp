#include <cstdio>
#include <cstring> // for strcpy

// Using the std namespace for convenience
using namespace std;

// Define a struct to represent a Car
struct Car
{
  // Character array to store the car's name
  char name[256];
};

// Function to print the names of the cars in the array
void print_name(Car *cars, size_t n_cars)
{
  // Loop through each car in the array
  for (size_t i = 0; i < n_cars; i++)
  {
    // Print the name of the car followed by " Car"
    printf("%s Car\n", cars[i].name);
  }
}

int main()
{
  // Initialize an array of 3 Car structs
  Car myGarage[3];

  // Use strcpy to copy the strings into the struct members
  strcpy(myGarage[0].name, "BMW");
  strcpy(myGarage[1].name, "Mercedes");
  strcpy(myGarage[2].name, "Ford");

  // Call the print_name function to print the car names
  print_name(myGarage, sizeof(myGarage) / sizeof(Car));

  return 0;
}