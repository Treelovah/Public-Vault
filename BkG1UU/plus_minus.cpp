/*

    arr = [1, 1, 0, -1, -1]
    
    1. find positives
    2. find negatives
    3. find zeros
    4. get/ print ratios of each

    float positive{ 0.0 }, negative{ 0.0 }, zero{ 0.0 };

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) > 0) zero++;
        else if (arr.at(i) < 0) negative++;
        else zero++;

        printf("%f %f %f\n",(float(arr.size()) / positive), (float(arr.size()) / negative... etc))
    }

*/

#include <bits/stdc++.h>

void plus_minus(std::vector<int> arr)
{
    float positive{ 0.0 }, negative{ 0.0 }, zero{ 0.0 };
    int i;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) > 0) positive++;
        else if (arr.at(i) < 0) negative++;
        else zero++;
    }
    printf("%f\n%f\n%f\n",(positive / float(arr.size())), (negative / float(arr.size())), (zero / float(arr.size())));
}


int main(int argc, char const *argv[])
{
    std::vector<int> arr{ -4, 3, -9, 0, 4, 1 };
    plus_minus(arr);
    return 0;
}
