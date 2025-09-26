#include <iostream>

int main(int argc, char const *argv[])
{
    int a;         // default-initialization (no initializer) //unpredictable value

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces) //does not allow narrowing conversion, for example: 4.5 to 4 in non floating point values
    int e {};      // value-initialization (empty braces) // value usually 0



    
    //[[maybe_unused]] attribute
    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used
    // When without this attribute the compiler will likely complain about gravity being defined but unused
    return 0;
}

