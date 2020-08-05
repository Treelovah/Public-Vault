#include <iostream>
#include <vector>
#include <algorithm>


int simple_array_sum(std::vector<int> arr)
{
    int sum{ 0 };
    for (int it : arr) sum+=it;
    return sum; 
}

int main(int argc, char const *argv[])
{
    int n, o, i;
    std::vector<int> arr;
    std::cin >> n;
    for (i = 0; i < n; i++)
    {
        std::cin >> o;
        arr.push_back(o);
    }
    arr.resize(n);
    simple_array_sum(arr);
    
    return 0;
}
