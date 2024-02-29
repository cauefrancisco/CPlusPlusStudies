#include <iostream>

int main()
{
  std::string name;
  std::string whiteSpace;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  // name.clear();
  // name.append("@gmail.com");
  name.insert(0, "@");

  whiteSpace.find(' '); // look for white spaces

  if (name.empty())
  {
    std::cout << "You didn`t enter your name!";
  }

  if (name.length() > 24)
  {
    std::cout << "Your name can`t be over 24 character \n";
  }
  else
  {
    std::cout << "Welcome " << name;
  }

  return 0;
}