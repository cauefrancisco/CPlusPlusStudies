#include <iostream>
#include <ctime>

int main()
{
  // pseudo-random = NOT truly random(but close);

  srand(time(NULL));

  int age;
  bool wannaKnow;
  char response;

  std::cout << "What is your age? ";
  std::cin >> age;

  int num1 = (rand() % 6) + 1;     // btween 1 and 6
  int num2 = (rand() % age) + age; // between your 1 and your age + your age
  int num3 = (rand() % 6) + 1;     // btween 1 and 6

  do
  {
    std::cout << "Do you wanna know at what age everything will change? (y/n)";
    std::cin >> response;

  } while (response != 'y' && response != 'n');

  if (response == 'y' || response == 'Y')
  {
    wannaKnow = true;
  }
  else if (response == 'n' || response == 'N')
  {
    wannaKnow = false;
  }

  if (wannaKnow)
  {
    std::cout << "Everything will change in your life at the age of " << num2 << '\n';
  }

  return 0;
}