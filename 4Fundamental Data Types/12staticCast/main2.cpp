#include <iostream>

int charTOint(char x)
{
    return x;
}

int main()
{
    std::cout<<"Enter a single character: ";
    char c{};
    std::cin>>c;
    std::cout<<"You entered '"<<c<<"', which has ASCII code "<<charTOint(c)<<".\n";
    return 0;
}

