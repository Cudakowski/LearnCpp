#include <iostream>

int enterNumber()
{
    std::cout<<"Enter number from 0 to 9: \n";
    int x{};
    std::cin >> x;
    return x;
}

bool isPrime(int x)
{
    if(x==2)
        return true;
    if(x==3)
        return true;
    if(x==5)
        return true;
    if(x==7)
        return true;

    return false;
}

int main()
{
    int x{enterNumber()};

    if(isPrime(x))
        std::cout<< x <<" is prime!\n";
    else
        std::cout<< x <<" is not prime!\n";
    
    return 0;
}

