/*
list = [0,1,0,0,0,1,0]
jumps = 0;
for pos in list:
    if pos == 0: pos+2; jumps++
    if pos == 1: pos--; 

    return jumps


*/

#include <iostream>
#include <vector>

int cloud_jumper(std::vector<int> clouds)
{
    int pos{ 0 }, jumps{ 0 }; 
    for (;pos < clouds.size() - 1;)
    {
        if (clouds.at(pos) == 0) pos+=2, jumps++; 
        else if (clouds.at(pos) == 1) pos--;
    }
    return jumps;
}

int main(int argc, char const *argv[])
{
    std::vector<int> clouds{ 0, 0, 1, 0, 0, 1, 0 };
    
    std::cout << cloud_jumper(clouds);
    return 0;
}
