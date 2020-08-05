/*

    Given a 6 x 6 2D array, arr:

    -9 -9 -9  1 1 1 
    0 -9  0  4 3 2
    -9 -9 -9  1 2 3
    0  0  8  6 6 0
    0  0  0 -2 0 0
    0  0  1  2 4 0

calculates to:
    
    -63, -34, -9, 12, 
    -10, 0, 28, 23, 
    -27, -11, -2, 10, 
    9, 17, 25, 18


======================================

    Function Description

Complete the function hourglassSum in the editor below. It should return an integer, the maximum hourglass sum in the array.

hourglassSum has the following parameter(s)
    

    Sample Input:

        1 1 1 0 0 0
        0 1 0 0 0 0
        1 1 1 0 0 0
        0 0 2 4 4 0
        0 0 0 2 0 0
        0 0 1 2 4 0
    
    Sample output:
        
        19
        
        
    solution:
        iterate thru list using a nest for loop (or recursion for optimization?? check into that)
        on a cycle of "3 --> 1 --> 3" repeated for each row.
        
        going to be shifting one to the right after each outermost loop passthru, and 1 downward on the secondary loop
        
        create array that holds sums of each hourglass
        iterate thru hour glass to find greatest sum, print it.

*/

#include <bits/stdc++.h>

int hour_glass_sum(std::vector<std::vector<int>> arr)
{
    std::vector<int> sums;  // list for sums of each hourglass
    int k{ 0 }, l{ 0 }, sum{ 0 }, max;
    while (l < 4) // outermost loop for shifts right by 1 
    {
        while (k < 4) // seconary loop for shifts downward by 1
        {   
            for (int i = 0+k; i < 3+k; i++) // looping through rows
            {
                for (int j = 0+l; j < 3+l; j++) // looping through columns
                {
                    if (arr[i][j] < -9 || arr[i][j] > 9) exit(1); // constraints, disallowing anything below -9 or above +9
                    if (i == 1+k) // checks for middle row, if true, only add middle column value to sum and exit loop.
                    {
                        sum += arr[i][1+l];
                        break;
                    }
                    sum += arr[i][j]; // if row is a top or bottom part of the hour glass, add all 3 colum values.
                }
            }
            sums.push_back(sum); // store sum of 1st hour glass in sums array
            sum = 0; // reset sum to 0
            k++; // increase outerloop by one and restart.
        }
        k = 0; // when k finally hits 4, it will end the k loop, reset k to 0 so that it is ready for next go
        l++;
    }
    max = sums.at(0); // set max to first value found in sums. 
    for (int i : sums) if (i > max) max = i; // checks if each value is greater than the current max, if so, set max to current value.
    return max; // returns greatest value
}

int main(int argc, char const *argv[])
{   
    std::vector<std::vector<int>> arr{ 
        {-1, -1, 0, -9, -2, -2}, 
        {-2, -1, -6, -8, -2, -5}, 
        {-1, -1, -1, -2, -3, -4}, 
        {-1, -9, -2, -4, -4, -5}, 
        {-7, -3, -3, -2, -9, -9}, 
        {-1, -3, -1, -2, -4, -5} 
        };
    
    std::cout << hour_glass_sum(arr);
    return 0;
}
