#include <iostream>

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a + b + c == d ||
        a + b - c == d ||
        a + b * c == d ||
        a - b + c == d ||
        a - b - c == d ||
        a - b * c == d ||
        a * b + c == d ||
        a * b - c == d ||
        a * b * c == d)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}