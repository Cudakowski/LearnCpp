#include <iostream>

int add(int a,int b);

int main()
{
  std::cout << "6 + 9 = " <<add(6,9) << '\n';
  return 0;
}

int add(int a,int b)
{
  return a+b;
}