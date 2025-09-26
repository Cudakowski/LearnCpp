#include <iostream>

void doB()
{
  std::cout << "B" << '\n';
}

void doA()
{
  std::cout << "A start" << '\n';
  doB();
  std::cout << "A end" << '\n';
}

int main()
{
  std::cout << "main start" << '\n';
  
  doA();
  doB();
  
  std::cout << "main end" << '\n';
}
