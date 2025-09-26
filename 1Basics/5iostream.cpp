#include <iostream>  // for std::cout and std::cin


//cout and cin each has their own buffers. When cout buffer is flushed things are being shown on the console.
//cin buffer enables data entry to various variables thanks to whitespaces and chcecking for invalid data for each datatype.

int main()
{
    std::cout << "Enter three numbers: "; // ask user for numbers
    int x{}; // define variables to hold user input
    int y{};
    int z{};
    std::cin >> x >> y >> z; // get numbers from keyboard and store it in variables
    std::cout << "You entered " << x <<", " << y << ", and "<< z<< ".\n";

    return 0;
}

