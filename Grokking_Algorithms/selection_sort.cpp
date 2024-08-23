#include <iostream>
#include <vector>


void selectionsort(std::vector<int>& v)
{


    int n = v.size();


    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(v[j] < v[min])
            {
                min = j;
            }
        }

            std::swap(v[i], v[min]);
    }

}


int main()
{

    std::vector<int> v = {54, 43, 99, 13, 34, 38, 19, 55};

    for(auto i : v)
    {
        std::cout << i << " ";
    }
    selectionsort(v);

    std::cout << std::endl;

     for(auto i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}