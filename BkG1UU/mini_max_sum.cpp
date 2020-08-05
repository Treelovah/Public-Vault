/*


    given an array of n, find the largest int and smallest int and add them

    void mini_max_sum(std::vector<int> arr)
    {

        int max{ arr.at(0) }, min{ arr.at(0) }, sum{ 0 };
        
        for (int it : arr)
        {
            if (it > max) max = it;
            if (it < min) min = it;
            sum += it;
        }
        std::cout << (sum - max) << ' ';
        std::cout << (sum - min) << std::endl;
    }


*/
#include <bits/stdc++.h>

void mini_max_sum(std::vector<int> arr)
{
    int max{ arr.at(0) }, min{ arr.at(0) }; 
    long sum{ 0 };
    
    for (int it : arr)
    {
        if (it > max) max = it;
        if (it < min) min = it;
        sum += it;
    }
    std::cout << (sum - max) << ' ';
    std::cout << (sum - min) << std::endl;
}


int main(int argc, char const *argv[])
{
    std::vector<int> arr{ 256741038, 623958417, 467905213, 714532089, 938071625 };
    mini_max_sum(arr);
    return 0;
}
