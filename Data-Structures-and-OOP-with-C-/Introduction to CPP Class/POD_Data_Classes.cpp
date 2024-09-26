#include <stdio.h>

struct Car
{
  char make[265];
  int year;
  int wheels;
  bool isRunning;
};

int main()
{
  Car myBMW;
  myBMW.year = 2001;
  myBMW.isRunning = true;
  printf("My BMW yaer : %d", myBMW.year);

  return 0;
}
