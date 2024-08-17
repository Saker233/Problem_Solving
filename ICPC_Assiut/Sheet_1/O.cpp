#include <iostream>

int main()
{
    int A, B;
    char C;

    std::cin >> A >> C >> B;

    int res = 0;

    switch (C)
    {
    case '+':
        res = A + B;
        break;

    case '-':
        res = A - B;
        break;
    case '*':
        res = A * B;
        break;
    case '/':
        res = A / B;

    default:
        break;
    }

    std::cout << res;
}