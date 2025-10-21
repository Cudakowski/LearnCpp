#include <iostream>
#include <string>
#include <string_view>

std::string inputName(int personNumber)
{
    std::cout <<"Enter the name of person #"<<personNumber<<": ";
    std::string name{};
    getline(std::cin >> std::ws,name);
    return name;
}

int getAge(std::string_view name)
{
    std::cout <<"Enter the age of "<<name<<": ";
    int x{};
    std::cin >>x;
    return x;
}

int main()
{
    std::string name1{inputName(1)};
    int age1{getAge(name1)};    
    std::string name2{inputName(2)};    
    int age2{getAge(name2)};
    
    if(age1>age2)
        std::cout <<name1<<" (age "<<age1<<") is older than "<<name2<<" (age "<<age2<<").\n";
    else if (age2>age1)
        std::cout <<name2<<" (age "<<age2<<") is older than "<<name1<<" (age "<<age1<<").\n";

    return 0;
}
