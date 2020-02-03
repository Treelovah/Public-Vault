#include <iostream>


int array[48][7]; // this is like 3 rows, 5 columns. a multi-dimensional array.
	
int main()
{
    constexpr int numRows{ 53 };
    constexpr int numCols{ 8 };
 
    // Declare a 10x10 array
    int product[numRows][numCols]{};
 
    // Calculate a multiplication table
    for (int row{ 1 }; row < numRows; ++row)
        for (int col{ 1 }; col < numCols; ++col)
            product[row][col] = row * col;
 
    // Print the table
    for (int row{ 1 }; row < numRows; ++row)
    {
        for (int col{ 1 }; col < numCols; ++col)
            std::cout << product[row][col] << '\t';
 
        std::cout << '\n';
    }
 
}