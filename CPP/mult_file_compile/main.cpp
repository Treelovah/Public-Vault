#include <iostream>
#include "math.h"

int main()
{
    std::cout << "Math can be fun, especially with programming ^_^\n" << "Watch!, add a number. \n";
    int a = input();
    int b = input();
    std::cout << "The sum of your two numbers are: " << add(a,b);
    return 0;
}
