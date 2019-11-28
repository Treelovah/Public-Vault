#include <iostream>

// explicit type conversions, where the developer uses a casting operator to direct the conversion

int main(int argc, char const *argv[])
{
    // many new programmers will do something like this:
    int i1{10};
    int i2{4};
    float f{i1 / i2};
    std::cout << f << std::endl; // Will procure Err: warning: narrowing conversion of ‘(i1 / i2)’ from ‘int’ to ‘float’
                    // and will print '2'

    // how it should be done:
    f = (float)i1 / i2;
    std::cout << f << '\n'; // Will print out '2.5'

    // A GOOD RULE OF THUMB... AVOID BOTH STYLES OF CONVERSIONS ABOVE
    // use C++ version:
        // static_cast

        // Casting should be avoided if at all possible, because any time a cast is used, there is potential for trouble. 
        // But there are many times when it can not be avoided. 
        // In most of these cases, the C++ static_cast should be used instead of the C-style cast.
    return 0;
}

