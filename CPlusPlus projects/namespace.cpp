#include <iostream>

namespace first
{
  int x = 1;
}
namespace second
{
  int x = 2;
}

int main()
{
  // namespace = provides a solution for preventing name conflits
  //             in a large project. Each entity needs a unique name.
  //             A namespace allows for identically named entities as long the namespace are different.

  int x = 0;

  //  :: = scope resolution operator (reference)

  std::cout << first::x << '\n';
  std::cout << second::x << '\n';
  std::cout << x << '\n';

  return 0;
}