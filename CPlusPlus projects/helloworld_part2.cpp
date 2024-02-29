#include <iostream>

int main()
{
  // integer (whole number)
  int age = 25;
  int x; // declaration
  x = 5;

  int y = 6;
  int sum = x + y;

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << sum << '\n';

  // if you need a number with decimal use:
  // double (number with decimal)
  double price = 10.96;
  double gpa = 2.5;

  std::cout << price << '\n';

  // char (display single character)
  char grade = 'A';
  char initial = 'C';
  char currency = '$';

  std::cout << currency << price << '\n';

  // boolean (true or false)
  bool student = false;
  bool ofAge = true;
  bool inStock = false;

  // string (type of object that represents sequence of text)
  std::string name = "Caue";
  std::string day = "Friday is the best";
  std::string address = "R. Atucuri";

  std::cout << "Hello " << name << '\n';

  //  Section 2 ------------------------

  // Const keyword specifies that a variable`s value is constant
  // tells the compiler to prevent anything from modifying it
  // (read-only)

  const double PI = 3.14159;
  double radius = 10;
  double circumference = 2 * PI * radius;

  std::cout << circumference << "cm" << '\n';

  return 0;
}