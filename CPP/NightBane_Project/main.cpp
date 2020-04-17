/*
check first word on each line that will grab highest number.
    that will be the row count for 2D array.

make 2D array that stores x and y.
    x and y will be the 2nd and 3rd word of line

*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int getRowCount();

int main(int argc, char const *argv[])
{
    int arr[getRowCount()][2];
    std::ifstream inf;
    inf.open("data.txt");
    // get the correct x and y in the 2D array.

    return 0;
}

int getRowCount()
{
    int highest { 0 };
    int row { 0 };
    std::string str;
    std::ifstream inf;
    inf.open("data.txt");
    while (inf) {
        std::getline(inf, str);
        if (inf.eof())
        {
            break;
        } else 
        {
            std::string first_word = str.substr(0, str.find(" "));
            row = std::stoi(first_word);
            
            if (row > highest)
            {
                highest = row;
            }
        }
    }
    inf.close();
    return highest;
}