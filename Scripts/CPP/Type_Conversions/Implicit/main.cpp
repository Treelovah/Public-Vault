#include <iostream>
#include <iomanip>
#include <typeinfo>


// implicit type conversion, where the compiler automatically transforms one fundamental data type into another.
// Numeric promotion:
    // Whenever a value from one type is converted into a value of a larger similar data type

long l{ 64 }; // widen the integer 64 into a long
double d{ 0.12f }; // promote the float 0.12 into a double

// There are two basic types of implicit type conversion: promotions and conversions.
int main(int argc, char const *argv[])
{
    short a{4};
    short b{5};
    std::cout << typeid(a + b).name() << " " << a + b << '\n'; // this always work within 32 bits calculations
    int c{4};
    float d{5.53};
    std::cout << typeid(c + d).name() << " " << c + d << '\n'; // this will resort to the safest conversion available (float)
}


