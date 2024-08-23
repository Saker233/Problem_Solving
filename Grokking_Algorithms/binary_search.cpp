#include <iostream>
#include <vector>


int binary_search(const std::vector<int>& v, int item) 
{
    int low = 0;
    int high = v.size() - 1;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;  // Prevent potential overflow
        int guess = v[mid];

        if (guess == item) 
        {
            return mid;
        }

        if (guess < item) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    return -1;  // Item not found
}


int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int index = binary_search(v, 7);

    std::cout << index << std::endl;
}