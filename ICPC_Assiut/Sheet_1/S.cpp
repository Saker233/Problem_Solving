#include <iostream>

int main()
{

    float x;

    std::cin >> x;

    if ((x >= 0) && (x <= 25))
    {
        std::cout << "Interval [0,25]" << std::endl;
    }
    else if ((x > 25) && (x <= 50))
    {
        std::cout << "Interval (25,50]" << std::endl;
    }
    else if ((x > 50) && (x <= 75))
    {
        std::cout << "Interval (50,75]" << std::endl;
    }
    else if ((x > 75) && (x <= 100))
    {
        std::cout << "Interval (75,100]" << std::endl;
    }
    else
    {
        std::cout << "Out of Intervals" << std::endl;
    }
}