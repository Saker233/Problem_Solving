#include <iostream>

int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}

int main()
{
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    std::cout << "Factorial of " << number << " is " << fact(number) << std::endl;

    return 0;
}
