#include <iostream>

int main()
{
    long long x, y, z;

    std::cin >> x >> y >> z;

    if ((x % z == 0) && (y % z == 0))
    {
        std::cout << "Both" << std::endl;
    }
    else if ((x % z == 0) && (y % z != 0))
    {
        std::cout << "Memo" << std::endl;
    }
    else if ((x % z != 0) && (y % z == 0))
    {
        std::cout << "Momo" << std::endl;
    }
    else
    {
        std::cout << "No One" << std::endl;
    }
}