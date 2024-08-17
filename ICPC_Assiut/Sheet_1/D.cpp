#include <iostream>

int main()
{

    long long A, B, C, D;

    std::cin >> A >> B >> C >> D;

    long long X = (A * B) - (C * D);
    std::cout << "Difference = " << X << std::endl;
}