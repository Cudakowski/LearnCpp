#include "io.h"
#include <iostream>

int readNumber()
{
    int num{};
    std::cout << "Enter number: ";
    std::cin >> num;
    return num; 
}

void writeAnswer(int num)
{
    std::cout << num << '\n';
}
