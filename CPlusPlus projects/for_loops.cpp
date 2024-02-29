#include <iostream>

// break = break out of a loop;
// continue = skip current iteration;

int main()
{

  // for (int i = 50; i >= 1; i--)
  // {
  //   if (i == 13)
  //   {
  //     break;
  //   }
  //   if (i == 16)
  //   {
  //     continue;
  //   }
  //   std::cout << i << '\n';
  // }
  // std::cout << "HAPPY BIRTHDAY!\n";

  // nested loops = a loop inside a loop

  int rows;
  int col;
  std::string symbol;

  std::cout << "How many rows? ";
  std::cin >> rows;

  std::cout << "How many columns? ";
  std::cin >> col;

  std::cout << "What symbol to use? ";
  std::cin >> symbol;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= col; j++)
    {
      std::cout << symbol;
    }
  }

  return 0;
}