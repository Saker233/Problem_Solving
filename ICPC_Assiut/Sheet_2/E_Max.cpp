#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int num;
    std::vector<int> v;

    while (std::cin >> num)
    {
        v.push_back(num);
    }

    int m = *std::max_element(v.begin(), v.end());

    std::cout << m << std::endl;
}