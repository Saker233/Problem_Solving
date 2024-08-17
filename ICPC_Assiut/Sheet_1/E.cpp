#include <iostream>
#include <iomanip>

int main()
{
    double r;

    std::cin >> r;

    double PI = 3.141592653;

    std::cout << std::fixed << std::setprecision(9);

    std::cout << PI * r * r << std::endl;
}