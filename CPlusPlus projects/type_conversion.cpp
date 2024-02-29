#include <iostream>

// Type conversion = conversion of a value from one type to another.
//                   implicit = automatic
//                   Explicit = Precede value with new data type (int)

int main()
{
  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;

  // std::cout << score;

  return 0;
}