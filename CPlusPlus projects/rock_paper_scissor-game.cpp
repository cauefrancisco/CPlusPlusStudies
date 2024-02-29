#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer, bool winner);

int main()
{

  char player;
  char computer;
  bool winner;

  std::cout << "Rocke-Paper-Scissors Game! \n";
  std::cout << "-----------------------------------\n";

  player = getUserChoice();
  std::cout << "Your choice: ";
  showChoice(player);

  computer = getComputerChoice();
  std::cout << "Computer`s choice: ";
  showChoice(computer);

  chooseWinner(player, computer, winner);

  return 0;
}

char getUserChoice()
{

  char player;
  do
  {
    std::cout << "Choose one of the following: \n";
    std::cout << "--------------------------------- \n";
    std::cout << "'r' for Rock \n";
    std::cout << "'p' for Paper \n";
    std::cout << "'s' for Scissors \n";
    std::cin >> player;
  } while (player != 'r' && player != 'p' && player != 's');

  return player;
}
char getComputerChoice()
{
  srand(time(0));
  int num = rand() % 3 + 1;

  switch (num)
  {
  case 1:
    return 'r';
    break;
  case 2:
    return 's';
    break;
  case 3:
    return 'p';
    break;

  default:
    break;
  }

  return 0;
}
void showChoice(char choice)
{

  switch (choice)
  {
  case 'r':
    std::cout << "Rock \n";
    break;
  case 'p':
    std::cout << "Paper \n";
    break;
  case 's':
    std::cout << "Scissors \n";
    break;

  default:
    break;
  }
}
void chooseWinner(char player, char computer, bool winner)
{
  switch (player)
  {
  case 'r':
    if (computer == 'r')
    {
      std::cout << "it`s a tie! \n";
      winner = true;
    }
    else if (computer == 'p')
    {
      std::cout << "You loose! \n";
    }
    else
    {
      std::cout << "You Win!";
    }
    break;
  case 'p':
    if (computer == 'r')
    {
      std::cout << "You win! \n";
      winner = true;
    }
    else if (computer == 'p')
    {
      std::cout << "It`s a tie! \n";
    }
    else
    {
      std::cout << "You loose!";
    }
    break;
  case 's':
    if (computer == 'r')
    {
      std::cout << "You loose! \n";
      winner = true;
    }
    else if (computer == 'p')
    {
      std::cout << "It`s win! \n";
    }
    else
    {
      std::cout << "It`s a tie!";
    }
    break;

  default:
    break;
  }
}