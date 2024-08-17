#include <iostream>

int main()
{
    int x, y;

    std::cin >> x >> y;

    if (x % y == 0 || y % x == 0)
    {
        std::cout << "Multiples";
    }
    else
    {
        std::cout << "No Multiples";
    }
}