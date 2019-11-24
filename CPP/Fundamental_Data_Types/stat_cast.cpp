#include <iostream>

// have user input a character, then print out both the char and its ascii code:
//
//
char get_input() {
	std::cout << "Please enter a letter: ";
	char x{};
	std::cin >> x;
	return x;
}

int char_converter(char x) {
	return static_cast<int>(x);
}

int main() {
	char x;
	x = get_input();
	std::cout <<  "You entered character: " << x  << "\n";
	std::cout << "its ascii char is: " << char_converter(x) << "\n";
	return 0;
}
