#include <iostream>
#include "operators.h"

// first problem
int problem_1() {
	// a) x = 3 + 5 + 5
	int x{ (3 + 4 + 5) };
	return x;
}

// second problem
int problem_2() {
	// b) x = y = z;
	int z{},y{},x{};
    x = ( y = z);
    return x;
}

// third problem
int problem_3() {
    // Unary operator ++ has the highest precedence:
    int z{},y{1};
    z *= ((++y) + 5);
    return z;
}

int problem_4() {
    int a{}, b{}, c{}, d{}, x{};
    x = (a || (b && c)) || d;
    return x;
}
