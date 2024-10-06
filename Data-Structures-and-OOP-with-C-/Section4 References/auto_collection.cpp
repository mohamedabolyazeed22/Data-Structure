#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
  // Using 'auto' to deduce types for variables
  auto a = 42;   // int
  auto b = 42l;  // long
  auto c = 42ll; // long long
  auto d = 1.0f; // float
  auto e = 1.0;  // double
  auto f = "A";  // const char*
  auto g = true; // bool

  // Vector to hold tuples with car make and year of production
  vector<tuple<string, int>> myCars;

  // Adding cars to the vector using make_tuple
  myCars.push_back(make_tuple("BMW 5er", 2001));
  myCars.push_back(make_tuple("Ford Mustang", 1989));
  myCars.push_back(make_tuple("VW Golf", 2010));
  myCars.push_back(make_tuple("Land Rover", 2015));

  // Iterating over the vector of tuples and printing car info

  // Option 1: Explicitly specifying the type of each element
  /* for (tuple<string, int> myVehicle : myCars)
  {
    cout << get<0>(myVehicle) << ", " << get<1>(myVehicle) << endl;
  }
  */

  // Option 2: Using 'auto' to automatically deduce the type (recommended)
  for (const auto &myVehicle : myCars)
  {
    cout << get<0>(myVehicle) << ", " << get<1>(myVehicle) << endl;
  }

  return 0;
}
