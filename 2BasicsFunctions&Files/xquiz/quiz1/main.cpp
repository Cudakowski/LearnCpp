#include <iostream>

int readNumber();

void writeAnswer(int num);

int main()
{
    writeAnswer(readNumber()+readNumber());
    return 0;
}

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
