#include <iostream>

int main()
{
    int x, y;

    std::cin >> x >> y;

    if (x >= y)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }
}