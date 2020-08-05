/*
create staircase:
    1. base && height == n;
    2. use '#' symbol
    3. print it out.

    #
   ## 
  ###
 ####


 I need to find a way to do this like python, where it prints out space * n - 1, where n decrements by 1 over time.

int spaces = n-1;
int hashes = 1;

for (int i = spaces; i >= 0; i--)
{
    std::cout << ' ';
    for (int j = 0; j < hashes; j++)
    {
        std::cout << '#';
        hashes++;
    }
}
*/

#include <bits/stdc++.h>


void staircase(int n)
{
    int i{ 0 }, j, hashes{ 1 };
    while (n > 0)
    {
        for (i = n - 1; i > 0; i--)std::cout << ' ';
        for (j = 0; j < hashes; j++) std::cout << '#';
        
        std::cout << '\n';
        hashes++;
        n--;
    }
}

int main(int argc, char const *argv[])
{
    staircase(8);
    return 0;
}
