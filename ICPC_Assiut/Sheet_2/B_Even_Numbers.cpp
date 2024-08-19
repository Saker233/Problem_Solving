#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    if (n > 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << i << std::endl;
            }
        }
    }
    else
    {
        std::cout << "-1" << std::endl;
    }
}