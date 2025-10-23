#include <iostream>

constexpr bool isEven(int x)
{
  return (x%2==0);
}

int main()
{
  std::cout<<"Enter an integer: ";
  int x{};
  std::cin>> x;
  
  std::cout<<x<<" is "<<(isEven(x)?"even":"odd")<<" \n";
  
  return 0;
}