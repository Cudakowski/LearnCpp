#include <iostream>

void doB()
{
  std::std::cout << B << '\n';
}

void doA()
{
  std::std::cout << A start << '\n';
  doB();
  std::std::cout << A end << '\n';
}

int main()
{
  std::std::cout << main start << '\n';
  
  doA();
  doB();
  
  std::std::cout << main end << '\n';
}