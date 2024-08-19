#include <iostream>

int main()
{

    int n;

    std::cin >> n;

    int res = 1;

    for (int i = 1; i <= 12; i++)
    {
        res = i * n;

        std::cout << n << " * " << i << " = " << res << std::endl;
    }
}