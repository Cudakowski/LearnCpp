#include <iostream>

double getInputDouble()
{
    std::cout<<"Enter a double value: ";
    double x{};
    std::cin>>x;
    return x;
}

char getInputChar()
{
    std::cout<<"Enter +, -, *, or /: ";
    char x{};
    std::cin>>x;
    return x;
}

void calculatePrint(double a, double b, char c)
{
    double answear{};
    if(c=='+')
        answear=a+b;
    else if(c=='-')
        answear=a-b;
    else if(c=='*')
        answear=a*b;
    else if(c=='/')
        answear=a/b;
    else
        return;

    std::cout<<a <<' '<<c<<' '<<b<<" = "<<answear;

}

int main()
{
    double a{getInputDouble()};
    double b{getInputDouble()};
    char c{getInputChar()};

    calculatePrint(a,b,c);

    return 0;
}

