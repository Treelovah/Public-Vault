#include <iostream>

// get user input as an integer
// tell the user if it is odd or even
// write a function called isEven() that returns true if user input is even
// 	false otherwise
// use modulus (%) operator for testing
//

// get user input
// check if input  is even or odd  (bool)
// print shit
//

bool is_even(int x) {
	return ((x % 2) == 0);
}
int get_user_input() {
	std::cout << "Please enter number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main() {
	if (is_even(get_user_input())) {
		std::cout << "true\n";
	} else {
		std::cout << "False\n";
	}
}
