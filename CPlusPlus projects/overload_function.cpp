#include <iostream>

void pizzaToppings();
void pizzaToppings(std::string topping1);
void pizzaToppings(std::string topping1, std::string topping2);

int main()
{
  int toppingSelect;
  std::string response;
  std::string toppingsChoice;
  std::string toppings1;
  std::string toppings2;
  do
  {
    std::cout << "How many toppings would you like?\n"
              << " 1.No topping \n 2. 1 topping \n 3. 2 toppings \n";
    std::cin >> toppingSelect;
  } while (toppingSelect != 1 && toppingSelect != 2 && toppingSelect != 3);

  switch (toppingSelect)
  {
  case 1:
    pizzaToppings();
    break;
  case 2:
    std::cout << "What topping would you like?\n";
    std::cin >> toppingsChoice;
    pizzaToppings(toppingsChoice);
    break;
  case 3:
    std::cout << "What is the first topping that you would you like?\n";
    std::cin >> toppings1;
    std::cout << "What is the second topping that you would you like?\n";
    std::cin >> toppings2;
    pizzaToppings(toppings1, toppings2);
    break;
  }

  return 0;
}

void pizzaToppings()
{
  std::cout << "Order 7. no topping \n";
}
void pizzaToppings(std::string topping1)
{
  std::cout << "Order 8. Topping: " << topping1 << "\n Your pizza is on the way! thanks for your order";
}
void pizzaToppings(std::string topping1, std::string topping2)
{
  std::cout << "Order 9. Toppings: " << topping1 << " and " << topping2 << "\n Your pizza is on the way! thanks for your order";
}
