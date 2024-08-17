#include <iostream>
#include <algorithm>

int main()
{
    int x, y, z;

    std::cin >> x >> y >> z;

    int max = std::max({x, y, z});

    int min = std::min({x, y, z});

    std::cout << min << " " << max;
}