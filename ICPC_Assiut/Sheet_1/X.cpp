#include <iostream>

int main()
{

    long long l1, r1, l2, r2;

    std::cin >> l1 >> r1 >> l2 >> r2;

    int st;
    int en;

    // if ((B >= C) && (B <= D))
    // {
    //     std::cout << C << " " << B << std::endl;
    // }
    // else if ((B >= C) && (B >= D))
    // {
    //     std::cout << C << " " << D << std::endl;
    // }
    // else if((B >= C) && (B > D))
    // {

    // }
    // else
    // {
    //     std::cout << -1;
    // }

    if ((l2 < l1 && r2 < l1) || (l2 > r1 && r2 > l2))
    {
        std::cout << "-1";
    }
    else
    {
        if (l1 > l2)
            st = l1;
        else
            st = l2;

        if (r1 > r2)
            en = r2;
        else
            en = r1;

        std::cout << st << " " << en;
    }
}