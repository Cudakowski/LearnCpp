#include <iostream>
using namespace std;

bool isOdd(int x)
{
    return (x & 1);
}

int getValue()
{
    int x{};
    std::cout << "Enter integer value between 0 and 255: ";
    std::cin >> x ;
    return x;
}

int main()
{
    int x{getValue()};

    std::cout <<
    isOdd(x/128) <<
    isOdd(x/64) <<
    isOdd(x/32) <<
    isOdd(x/16) << ' ' <<
    isOdd(x/8) <<
    isOdd(x/4) <<
    isOdd(x/2) <<
    isOdd(x/1) << '\n';

    return 0;
}

