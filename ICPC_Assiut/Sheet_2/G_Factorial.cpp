#include <iostream>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int x, num;

    std::cin >> x;

    while (std::cin >> num)
    {
        int n = fact(num);

        std::cout << n << std::endl;
    }
}