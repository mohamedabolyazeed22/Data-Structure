#include <iostream>
struct myDataAndTime
{
  void add_year()
  {
    year++;
  }
  int year;
};

int main()
{
  myDataAndTime md;
  md.year = 2024;
  printf("Yaer : %d\n", md.year);
  md.add_year();
  printf("Yaer : %d\n", md.year);

  return 0;
}