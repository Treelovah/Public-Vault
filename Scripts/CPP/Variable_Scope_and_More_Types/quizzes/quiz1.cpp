#include <iostream>

// get 2 integers from user.
// 2nd larger than 1st
// if user entered a smaller int for the second int, use a block and a temporary variable to swap the smaller and larger values.
// print value of the smaller and larger variables. Add comments to your code indicating where each variable dies
//
//
// The program output should match the following 
/*
 * Enter an integer: 4
 * Enter a larget integer: 2
 * Swapping the values
 * The smaller value is: 2
 * The larger value is: 4
 */

void int_checker(int x, int y) {
	if (x > y) {
		int z{};
		z = y;
		y = x;
		x = z;
		std::cout << "Swapping the values\n" << "The smaller value is: " << x << '\n' << "The larget value is: " << y << '\n';
	} else {
        std::cout << "The smaller value is: " << x << '\n' << "The larger value is: " << y;
    }
}

int get_user_input() {
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	std::cout << "Enter a larger number: ";
	int y{};
	std::cin >> y;
	int_checker(x,y);
    return 0;
}

int main() {
	get_user_input();
}
