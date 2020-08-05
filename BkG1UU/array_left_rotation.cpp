/*

    Sample Input:

        5 4
        1 2 3 4 5

    Sample output:

        5 1 2 3 4
        Start           1              2              3              4
    [1,2,3,4,5] -> [2,3,4,5,1] -> [3,4,5,1,2] -> [4,5,1,2,3] -> [5,1,2,3,4]

*/

#include <bits/stdc++.h>

std::vector<int> rot_left(std::vector<int> a, int d)
{
    std::rotate(a.begin(), a.begin()+d, a.end());
    return a;
}

int main(int argc, char const *argv[])
{
    std::vector<int> arr;
    int d, i, n, as; 
    std::cin >> as;
    std::cin >> d;

    for (i = 0; i < as; i++)
    {
        std::cin >> n;
        arr.push_back(n);
    }

    rot_left(arr, d);
    return 0;
}
