#include <iostream>
#include <algorithm>
#include <vector>

int main()
{

    int A, B, C;

    std::cin >> A >> B >> C;

    // int max = std::max({A, B, C});

    // int min = std::min({A, B, C});

    std::vector<int> v;
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);

    std::vector<int> original(v);

    std::sort(v.begin(), v.end());

    for (auto i : v)
    {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    for (auto i : original)
    {
        std::cout << i << std::endl;
    }
}