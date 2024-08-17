#include <iostream>
#include <cmath>

int main()
{
    double A, B, C, D;

    std::cin >> A >> B >> C >> D;

    double first = pow(A, B);

    double second = pow(C, D);

    if (first > second)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}