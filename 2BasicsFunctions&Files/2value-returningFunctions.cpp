#include <iostream>

int return6()
{
  return 6;
}

int return9()
{
  return 9;
}

int main()
{
  std::cout << return6() << " + " << return9() << " = " << return6()+return9() << '\n';
  
  return 0;
}