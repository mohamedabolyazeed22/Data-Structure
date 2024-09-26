#include <stdio.h>
#include <vector>

int main()
{
  // Display initialization message
  printf("INITIALIZING VARIABLES...\n\n");

  // Different ways to initialize integers
  int a = 1;
  int b = 2; // Simplified form
  int c(3);
  int d{4};
  int e = {5};

  // Printing the values of variables
  printf("Values of initialized integers:\n");
  printf("A = %d \nB = %d \nC = %d \nD = %d \nE = %d\n\n", a, b, c, d, e);

  // Display message for array initialization
  printf("INITIALIZING ARRAYS...\n\n");

  // Initializing arrays
  int birth_years[] = {1920, 2001, 2011, 2019};
  int john[] = {1988};

  // Printing the array values
  printf("Birth years array: %d, %d, %d, %d\n", birth_years[0], birth_years[1], birth_years[2], birth_years[3]);
  printf("John's birth year: %d\n", john[0]);

  return 0;
}
