#include <iostream>

int main()
{
    long long A, B, C, D;

    std::cin >> A >> B >> C >> D;

    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;
    long long res = A * B * C * D;
    int x = res % 100;
    if (x < 10)
    {
        std::cout << "0" << x << std::endl;
    }
    else
    {
        std::cout << x << std::endl;
    }
}