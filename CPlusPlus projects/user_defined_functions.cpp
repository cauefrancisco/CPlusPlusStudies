#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
  // function = a block of reusable code;

  std::string name = "Caue";
  int age = 26;

  happyBirthday(name, age);

  return 0;
}

void happyBirthday(std::string name, int age)
{
  std::cout << "Happy Birthday to " << name << " <3 \n";
  std::cout << "Happy Birthday to " << name << " <3 <3 \n";
  std::cout << "Happy Birthday dear " << name << " <3 <3 <3\n";
  std::cout << "Happy Birthday to " << name << " <3 <3 <3 <3 \n";
}