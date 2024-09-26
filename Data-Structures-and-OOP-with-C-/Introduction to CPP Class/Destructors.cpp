#include <iostream>

class myDateAndTime
{ // PUBLIC AS DEFAULT
  int year;

public:
  int get_year()
  {
    return year;
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

  myDateAndTime clock;
  if (!clock.set_year(2018))
  {
    clock.set_year(2019);
  }
  clock.add_year();
  printf("year : %d\n", clock.get_year());

  return 0;
}
