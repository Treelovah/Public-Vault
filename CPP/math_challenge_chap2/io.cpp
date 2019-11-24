#include <iostream>
#include "io.h"

int read_numbers() {
    std::cout << "Enter a number: ";
    int user_reply{};
    std::cin >> user_reply;
    return user_reply;
}

int add(int x, int y) {
    return x + y;
}

void write_answer(int total) {
    std::cout << "The answer is: " <<  total << "\n";
}
