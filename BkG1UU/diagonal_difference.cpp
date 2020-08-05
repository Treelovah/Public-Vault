/*

    list = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }

    1. add first row first index, second row second index, third row third index, fourth row fourth index, etc.., save to variable a
    2.  do it backwards. we can iterate backwards fairly easily with rbegin, rend... (i think); save to variable b
    3. return |a - b|

    psuedo code

    get size of array. list.size()    
    

*/

#include <bits/stdc++.h>

int diag_diff(int arr[][2])
{
    int a{ 0 }, b{ 0 }, sum{ 0 }, i, j;

    for (int i = 0; i < 3; i++)
    {
        j = i;
        a += arr[i][j];
    }

    for (i = 0; i < 3; i++)
    {
        j = arr[i][2 - i];
        b += arr[i][2 - i];
    }
    sum = a - b;
    return abs(sum);
}

int diagonal_diff(std::vector<std::vector<int>> arr)
{
    int a{ 0 }, b{ 0 }, sum{ 0 };
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        a += arr[i][j];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int j = arr.size() - 1 - i;
        b += arr[i][j];   
    }

    sum = a - b;
    return abs(sum);
}

int main(int argc, char const *argv[])
{
    std::vector<std::vector<int>> list{ {11, 2, 4}, {4, 5, 6}, {10,8,-12} };
    int num{ 2 }, tmp;
    std::cin >> num;
    
    int arr[2][2];

    arr[0][0] = 11;
    arr[0][1] = 2;
    arr[0][2] = 4;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    arr[2][0] = 10;
    arr[2][1] = 8;
    arr[2][2] = -12;

    diag_diff(arr);

    
    std::cout << diagonal_diff(list);
    return 0;
}
