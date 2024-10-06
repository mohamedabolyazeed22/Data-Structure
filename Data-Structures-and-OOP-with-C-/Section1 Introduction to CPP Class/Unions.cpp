#include <stdio.h>

union variant
{
  char mysString[10];
  int myInteger;
  double myDouble;
};

int main()
{
  union variant v;

  // Assign and print the integer value
  v.myInteger = 32;
  printf("My Union Integer : %d\n", v.myInteger);

  // Assign and print the double value
  v.myDouble = 3.3246;
  printf("My Union Double : %f\n", v.myDouble);

  // Printing the integer value after writing to the double
  // This will show how the union overwrites the value
  printf("My Union Integer (overwritten): %d\n", v.myInteger);

  return 0;
}
