#include <iostream>

//take integer from user
//double that integer using a function called double_number()
//print it out to console
int user_integer() {
    std::cout << "Enter a number: ";
    int user_integer;
    std::cin >> user_integer;
    return user_integer;
}

void double_number(int user_integer) {
    std::cout << "your doubled value is: " << user_integer * 2;
}

int main() {
    double_number(user_integer());
    return 0;
}
