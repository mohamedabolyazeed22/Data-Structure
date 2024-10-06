#include <cstdio>

using namespace std;

// Struct to represent a year in the world
struct WorldYear
{
  int year; // Member variable to store the year

  // Method to get the current year
  int get_year()
  {
    return year;
  }

  // Method to set the year
  void set_year(int tyear)
  {
    year = tyear;
  }
};

// Function to add one year to the WorldYear object
void add_year(WorldYear &xyear)
{
  xyear.set_year(xyear.get_year() + 1); // Increment the year by 1
}

int main()
{
  WorldYear myEarth;      // Create an instance of WorldYear
  myEarth.set_year(2022); // Set the initial year to 2022

  // Print the current year
  printf("The year is %d.\n", myEarth.get_year());

  // Add one year to the current year
  add_year(myEarth);

  // Print the updated year
  printf("The year is add %d.\n", myEarth.get_year());

  return 0; // Return success
}
