#include <iostream>

// use if/else statement

// give user ability to set size of classroom
// if in_big_classroom is true, 30, else 20 { set class_size }
// print out class size to user
//

// get user input (true or flase) big classroom or not
int get_user_input() {
	int x{};
	std::cin >> x;
	return x;
}

// function to check if big or not, assign correctly.
bool is_big(int x) {
	return ((x < 2 && x > 0) ? true : false);
}
// print out result
int main() {
	std::cout << "Enter 1 for big class (over 30) and 2 for small class (larger than 20)";
	is_big(get_user_input());
	return 0;
}
