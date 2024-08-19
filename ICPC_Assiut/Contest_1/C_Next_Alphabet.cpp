#include <iostream>

int main()
{
    char c;

    std::cin >> c;

    if (c == 'z')
    {
        std::cout << 'a';
    }
    else
    {
        c++;

        std::cout << static_cast<char>(c) << std::endl;
    }
}