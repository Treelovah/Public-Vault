#include <iostream>
#include <vector>

std::vector<int> compare_triplets(std::vector<int> a, std::vector<int> b)
{
    int i; 
    std::vector<int> rank{ 0, 0};

    for (i = 0; i < 3; i++)
    {
        if (a.at(i) > b.at(i)) rank.at(0) += 1;
        else if ( a.at(i) < b.at(i)) rank.at(1) += 1;
    }
    return rank;
}

int main(int argc, char const *argv[])
{
    std::vector<int> a, b;
    int n, i;

    for (i = 0; i < 3; i++) 
    {
        std::cin >> n; 
        a.push_back(n);
    }
    for (i = 0; i < 3; i++) 
    {
        std::cin >> n; 
        b.push_back(n);
    }
    compare_triplets(a,b);
    return 0;
}
