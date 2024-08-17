#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int years = n / 365;

    int month = (n % 365) / 30;

    int day = (n % 365) % 30;

    std::cout << years << " years" << std::endl;
    std::cout << month << " months" << std::endl;
    std::cout << day << " days" << std::endl;
}