#include <iostream>
#include <vector>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(std::vector<int> &v, int low, int high)
{
    int pivot = v[high];

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }

    swap(v[i + 1], v[high]);

    return i + 1;
}

void quickSort(std::vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pi = partition(v, low, high);

        quickSort(v, low, pi - 1);

        quickSort(v, pi + 1, high);
    }
}

int main()
{

    std::vector<int> v{10, 7, 8, 9, 1, 5};

    std::cout << "Unsorted Vector";
    std::cout << std::endl;
    for (auto i : v)
    {
        std::cout << i << " ";
    }

    quickSort(v, 0, v.size() - 1);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Sorted Vector";
    std::cout << std::endl;
    for (auto i : v)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}