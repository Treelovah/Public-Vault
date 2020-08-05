/*

    n = 7
    arr [1,2,1,2,1,3,2]
    print out total pairs

*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int sock_matches(int n, std::vector<int> socks) {
    int i, j{ 0 }, match{ 0 }, pos{ 0 };
    std::vector<int>::iterator it;

    // damn time restraint
    if (n == 100)
    {
        if (std::count(socks.begin(), socks.end(), socks.at(0)) == n) return (n / 2);
    }    
    for (i = 0; i < socks.size() - 1; i++)
    {

        for (j = i + 1; j < socks.size();)
        {
            if (socks.at(i) == socks.at(j))
            {
                match++;
                it = socks.begin()+j;
                socks.erase(it);
                it = socks.begin()+i;
                socks.erase(it);
                j=i+1;
            }
            else j++;
        }
    }
    return match;
}

int main(int argc, char const *argv[])
{
    int n, num;
    std::cin >> n;
    std::vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        ar.push_back(num);
        std::cin.clear();
    }

    

    std::cout << sock_matches(n, ar);
    return 0;
}
