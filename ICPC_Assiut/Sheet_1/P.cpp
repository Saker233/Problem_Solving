#include <iostream>

int main()
{
    int x;

    std::cin >> x;

    int qut = x / 1000;

    if (qut % 2 == 0)
    {
        std::cout << "EVEN";
    }
    else
    {
        std::cout << "ODD";
    }
}