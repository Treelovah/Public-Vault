#include <iostream>
// fuck these are cool:
// #define area(r) (3.14*r*r)
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int x = 5;
    int a = *&x;
    a = std::pow((double)a, 2.0);
    cout << a << " " << x << '\n';
    return 0;
}
