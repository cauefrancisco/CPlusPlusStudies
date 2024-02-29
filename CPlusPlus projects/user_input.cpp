#include <iostream>

// count << (insert operator);
// cin >> (extraction operator);

int main()
{
  std::string name;
  std::string lastName;
  int age;

  std::cout << "What's your name?" << '\n';
  std::cin >> name;
  std::cout << "What's your full name?" << '\n';
  std::getline(std::cin >> std::ws, lastName); // getline() will read strings that need spaces
  std::cout << '\n';
  std::cout << "What's your age?" << '\n';
  std::cin >> age;

  if (age < 18)
  {
    std::cout << "Sorry " << name << ". You cannot access yet. You`re too young" << '\n';
  }
  if (age >= 18)
  {
    std::cout << "Hello " << name << ". Welcome!";
  }

  return 0;
}