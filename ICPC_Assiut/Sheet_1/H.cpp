#include <iostream>
#include <cmath>

int main()
{
    double x, y;

    std::cin >> x >> y;

    std::cout << "floor " << x << " / " << y << " = " << floor(x / y) << std::endl;

    std::cout << "ceil " << x << " / " << y << " = " << ceil(x / y) << std::endl;

    std::cout << "round " << x << " / " << y << " = " << round(x / y) << std::endl;
}