/*

    given an arr full of candle heights
    we need to find the max, and then count how many maxes there are

    1. loop through and find max num;
    2. count how many times that number appears.


*/

#include <bits/stdc++.h>

int birthdayCakeCandles(std::vector<int> ar)
{
    int i, total, max{ ar.at(0) };
    for (i = 0; i < ar.size(); i++)
    {
        if (ar.at(i) > max) max = ar.at(i);
    }    
    total = std::count(ar.begin(), ar.end(), max);
    return total;
}

int main(int argc, char const *argv[])
{
    std::vector<int> ar{ 3,2,1,3 };
    birthdayCakeCandles(ar);
    return 0;
}
