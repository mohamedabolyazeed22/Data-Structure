#include <iostream>

class myDateAndTime
{
  int year;

public:
  int get_year()
  {
    return year;
  }

  myDateAndTime(int yaer_in)
  {
    if (!set_year(yaer_in))
    {
      year = 2019;
    }

    year = 2019;
  }

  void add_year()
  {
    year++;
  }

  bool set_year(int new_year)
  {
    if (new_year < 2019)
      return false;
    year = new_year;
    return true;
  }
};

int main()
{
  myDateAndTime clock{2019};

  printf("Year is : %d\n", clock.get_year());

  clock.add_year();
  printf("Year is : %d\n", clock.get_year());

  return 0;
}
