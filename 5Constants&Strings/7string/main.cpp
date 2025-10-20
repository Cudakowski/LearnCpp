#include <iostream>
#include <string>

int main()
{
    std::cout<< "Enter full name: ";
    std::string name{};
    std::getline(std::cin>>std::ws, name);
    std::cout<< "Enter your age: ";
    int age{};
    std::cin >> age;
    std::cout<< "Your age + lenght of name: "<< age + static_cast<int>(name.length()) <<'\n';

    return 0;
}
