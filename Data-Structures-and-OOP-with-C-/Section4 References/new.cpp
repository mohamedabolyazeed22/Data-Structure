#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  // Initialize a vector of car models
  vector<string> myCars = {"BMW", "Ford", "Fiat", "VW", "Audi"};

  // Traditional for-loop using index to iterate through car models
  for (int i = 0; i < myCars.size(); ++i)
  {
    cout << myCars.at(i) << endl;
  }

  cout << "Range-Based Loop" << endl;

  // Range-based for-loop to iterate through car models
  for (const string &myCarModel : myCars)
  {
    cout << myCarModel << endl;
  }

  // Array of car production years
  int myCarsYear[] = {2002, 2005, 1989, 2010};

  // Range-based for-loop to iterate through car production years
  for (int year : myCarsYear)
  {
    // Fixed condition: changed '=' to '==' for comparison
    if (year == 1989)
    {
      cout << "Car IS TOO OLD: CLASSIC" << endl;
    }
    else
    {
      cout << year << endl;
    }
  }

  return 0;
}
