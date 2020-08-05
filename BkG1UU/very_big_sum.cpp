#include <iostream>
#include <vector>

long aVeryBigSum(std::vector<long> ar)
{
    unsigned long sum{ 0 };
    for (auto i : ar) sum+=i;
    return sum;
}

int main(int argc, char const *argv[])
{
    int i,n, num;
    std::vector<long> ar;

    std::cin >> n;

    for (i = 0; i < n; i++)
    {
        std::cin >> num;
        ar.push_back(num);
    }

    aVeryBigSum(ar);
    return 0;
}
