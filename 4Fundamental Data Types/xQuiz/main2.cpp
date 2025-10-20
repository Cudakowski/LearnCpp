#include <iostream>

double getInputDouble()
{
    std::cout<<"Enter the height of the tower in meters: ";
    double x{};
    std::cin>>x;
    return x;
}

double calculateHeight(int time, double height)
{
    double gravity{9.8};
    double newHeight{height-((gravity*(time*time))/2.0)};
    if (newHeight<0)
        return 0.0;
    else
        return newHeight;
    
}

void printHeight(int time, double newHeight)
{
    if (newHeight==0.0)
        std::cout<<"At "<<time<<" seconds, the ball is on the ground.\n";
    else
        std::cout<<"At "<<time<<" seconds, the ball is at height: "<<newHeight<<" meters\n";
}

void calculateHeightandPrint(int time, double height)
{
    double newHeight{calculateHeight(time,height)};
    printHeight(time,newHeight);
}


int main()
{
    double height{getInputDouble()};

    calculateHeightandPrint(0,height);
    calculateHeightandPrint(1,height);
    calculateHeightandPrint(2,height);
    calculateHeightandPrint(3,height);
    calculateHeightandPrint(4,height);
    calculateHeightandPrint(5,height);


    return 0;
}

