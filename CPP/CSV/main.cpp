#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int rows, row, temp;
    std::pair<int, int> x_y;
    std::pair<int, std::pair<int, int>> rowPair;
    std::vector<std::pair<int, std::pair<int, int>>> vectorPair;
    int key = 1;
    int count = 0;

    std::ifstream inf;
    inf.open("data.txt");

    inf >> rows;

    inf >> temp;
    while (!inf.eof())
    {
        inf >> row;
        inf >> x_y.first;
        inf >> x_y.second;
        rowPair.first = row;
        rowPair.second = x_y;
        vectorPair.push_back(rowPair);
    }

    while (key <= rows)
    {
        printf("%i : ",key);
        for (int i = 0; i < vectorPair.size(); i++)
        {
            if (vectorPair[i].first == key)
            {
                count++;
                printf("(%i, %i); ",vectorPair[i].second.first, vectorPair[i].second.second);
            }
        }
        printf("\n");
        key++;
    }
    return 0;
}
