#include <iostream>
#include <ctime>

int main()
{
  srand(time(0));
  int randNum = rand() % 5 + 1;

  switch (randNum)
  {
  case 1:
    std::cout << "The magician\n";
    break;
  case 2:
    std::cout << "The hight priestess\n";
    break;
  case 3:
    std::cout << "The empress\n";
    break;
  case 4:
    std::cout << "The emperor\n";
    break;
  case 5:
    std::cout << "The pope\n";
    break;

  default:
    std::cout << "you got nothing";
    break;
  }

  return 0;
}