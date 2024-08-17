#include <iostream>

int main()
{

    int A, B;

    char C;

    std::cin >> A >> C >> B;

    switch (C)
    {
    case '<':
        if (A < B)
        {
            std::cout << "Right";
        }
        else
        {
            std::cout << "Wrong";
        }
        break;

    case '>':
        if (A > B)
        {
            std::cout << "Right";
        }
        else
        {
            std::cout << "Wrong";
        }
        break;

    case '=':
        if (A == B)
        {
            std::cout << "Right";
        }
        else
        {
            std::cout << "Wrong";
        }
        break;

    default:
        break;
    }
}