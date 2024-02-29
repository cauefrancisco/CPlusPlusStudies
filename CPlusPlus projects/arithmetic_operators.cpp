#include <iostream>

// arithmatic operators = return the result of a specific
//                        arithmatic operation (+ - * /);

int main()
{
  int students = 20;

  // students = students + 1;
  // students += 1;
  students++;

  // students = students - 2;
  students -= 2;

  // students = students * 2;
  students *= 2;

  // students = students / 2;
  students /= 2;

  std::cout << students;

  int remainder = students % 3;

  return 0;
}
