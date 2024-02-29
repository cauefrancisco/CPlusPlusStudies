#include <iostream>

// return a value back to the spot where you called the encompassing function
//

double square(double length);
double cube(double length);
std::string concatString(std::string string1, std::string string2);

int main()
{
  double length = 6.0;
  double area = square(length);
  double volume = cube(length);
  std::string firstName = "Caue";
  std::string lastName = "Francisco";

  std::cout << "Area: " << area << "cm2\n";
  std::cout << "Volume: " << cube << "cm^3\n";

  std::string fullName = concatString(firstName, lastName);

  std::cout << "Full name: " << fullName;

  return 0;
}

double square(double length)
{
  return length * length;
}
double cube(double length)
{
  return length * length * length;
}

std::string concatString(std::string string1, std::string string2)
{
  return string1 + " " + string2;
}