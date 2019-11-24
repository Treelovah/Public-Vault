#include <iostream>

// Global Variables are a typical nono practice for me
// I try to utilize local variables as much as possible

// Global variables are typically declared at the top of the file, subsequent to #includes
// They stay alive the enirety of the program, this can be annoying and helpful.

int g_x; // global variable g_x
const int g_y{2}; // global variable g_y

void do_something() {
    std::cout << "g_x is: " << g_x << '\n';
    g_x = 5;
    std::cout << "still in do_something(), g_x is now: " << g_x << '\n';
}

int main() {
    do_something();
    std::cout << "This is g_x in main(): " << g_x;
    return 0;
}