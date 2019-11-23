#include <iostream>

/*
A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself.
Write a program that asks the user to enter a single digit integer.
If the user enters a single digit that is prime (2, 3, 5, or 7), print “The digit is prime”.
Otherwise, print “The digit is not prime”.
*/

bool is_prime(int x) {
    if ((x == 2) || (x ==3) || (x == 5) || (x == 7)) {
        return true;
    } else {
    return false;
    }
}

int get_input() {
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

int main() {
    if (is_prime(get_input()) == true) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }
}
