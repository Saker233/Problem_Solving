#include <iostream>

int main()
{

    long long x, y;

    long long first, second;
    std::cin >> x >> y;

    first = x % 10;

    second = y % 10;

    std::cout << first + second << std::endl;
}