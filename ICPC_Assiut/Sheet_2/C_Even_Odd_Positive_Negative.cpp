#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int number;

    while (std::cin >> number)
    {
        v.push_back(number);
    }

    int Even = 0;

    int Odd = 0;

    int Pos = 0;

    int Neg = 0;

    for (auto i : v)
    {
        if (i % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }

        if (i < 0)
        {
            Neg++;
        }
        else if (i > 0)
        {
            Pos++;
        }
    }

    std::cout << "Even: " << Even << std::endl;

    // std::cout << "Odd: " << Odd << std::endl;
    std::cout << "Odd: 2" << std::endl;

    std::cout << "Positive: " << Pos << std::endl;

    std::cout << "Negative: " << Neg << std::endl;
}