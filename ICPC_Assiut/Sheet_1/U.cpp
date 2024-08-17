#include <iostream>
#include <cmath>

int main()
{
    float n;

    std::cin >> n;

    if (std::floor(n) == n)
    {

        std::cout << "int " << static_cast<int>(n) << std::endl;
    }
    else
    {
        int integer = static_cast<int>(n);

        float num = n - integer;

        std::cout.precision(3);

        std::cout << "float " << integer << " " << num << std::endl;
    }
}
