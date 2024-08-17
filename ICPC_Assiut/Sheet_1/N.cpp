#include <iostream>

int main()
{
    char c;

    std::cin >> c;

    if ((c > 64) && (c < 91))
    {
        std::cout << static_cast<char>(c + 32);
    }
    else
    {
        std::cout << static_cast<char>(c - 32);
    }
}