#include <iostream>

//
//Write the following program:
// The user is asked to enter 2 floating point numbers (use doubles).
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
// The program computes the naswer on the two numbers the user entered and prints the reuslt.
// If the user enters an invalid symbol, the program should print nothing.
//
double get_user_num() {
	double x{};
	std::cout << "Enter a double value: ";
	std::cin >> x;
	return x;
}

char get_char() {
	char x{};
	std::cout << "Enter mathematical character: ";
	std::cin >> x;
	return x;
}

double math_stuff(double x, double y, char z) {
	if (z == '+') {
		return x + y;
	} else if (z == '-') {
		return x - y;
	} else if (z == '*') {
		return x * y;
	} else if (z == '/') {
		return x / y;
	} else {
		return 1;
	}
}

int main() {
	std::cout << math_stuff(get_user_num(),get_user_num(),get_char()) << '\n';
	return 0;
}
