#include <iostream>

int main()
{
    char c;

    std::cin >> c;

    if ((c > 47) && (c < 58))
    {
        std::cout << "IS DIGIT";
    }
    else if ((c > 64) && (c < 91))
    {
        std::cout << "ALPHA" << std::endl;
        std::cout << "IS CAPITAL";
    }
    else if ((c > 96) && (c < 123))
    {
        std::cout << "ALPHA" << std::endl;
        std::cout << "IS SMALL";
    }
}