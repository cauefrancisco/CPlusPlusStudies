#include <iostream>
#include <iomanip>

void shouBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

  double balance = 0;
  int choice = 0;

  do
  {
    std::cout << "**********************\n";
    std::cout << "Enter your choice: \n";
    std::cout << "**********************\n";
    std::cout << "1. Show balance \n";
    std::cout << "2. Deposit Money \n";
    std::cout << "3. Withdraw Money \n";
    std::cout << "4. Exit \n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);

    switch (choice)
    {
    case 1:
      shouBalance(balance);
      break;
    case 2:
      balance += deposit();
      shouBalance(balance);
      break;
    case 3:
      balance -= withdraw(balance);
      shouBalance(balance);
      break;
    case 4:
      std::cout << "Thanks for visiting \n";
      break;

    default:
      std::cout << "Invalid choice \n";
      break;
    }
  } while (choice != 4);

  return 0;
}

void shouBalance(double balance)
{
  std::cout << "Your balance is: R$" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
  double amount = 0;

  std::cout << "Enter amount to be deposited: \n";
  std::cin >> amount;

  if (amount > 0)
  {
    return amount;
  }
  else
  {
    std::cout << "That`s not a valid amount! ";
    return 0;
  }
}
double withdraw(double balance)
{
  double amount = 0;

  std::cout << "Enter amount to be withdraw: \n";
  std::cin >> amount;
  if (amount > balance)
  {
    std::cout << "Insuficient funds \n";
    return 0;
  }
  else if (amount < 0)
  {
    std::cout << "That`s not a valid amount \n";
    return 0;
  }
  else
  {
    return amount;
  }
}