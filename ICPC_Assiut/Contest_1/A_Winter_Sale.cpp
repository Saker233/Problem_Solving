#include <iostream>

int main()
{

    int X, P;

    std::cin >> X >> P;

    int rem = 100 - X;

    float original = 0.0;

    original = static_cast<float>((100.0 * P) / rem);

    std::cout << original << std::endl;
}