#include <iostream>

int main()
{
    int A, B, C;

    char X, Y;

    std::cin >> A >> X >> B >> Y >> C;

    int res = 0;

    switch (X)
    {
    case '+':
        if (A + B == C)
        {
            std::cout << "Yes";
        }
        else
        {
            res = A + B;
            std::cout << res;
        }

        break;

    case '-':
        if (A - B == C)
        {
            std::cout << "Yes";
        }
        else
        {
            res = A - B;
            std::cout << res;
        }

        break;
    case '*':
        if (A * B == C)
        {
            std::cout << "Yes";
        }
        else
        {
            res = A * B;
            std::cout << res;
        }

        break;

    default:
        break;
    }
}