#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n";
#endif

#ifndef PRINT_BOB
    std::cout << "Bob\n";
#endif

    return 0;
}