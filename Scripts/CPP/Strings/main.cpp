#include <string>
#include <iostream>


std::string my_name; // Straight forward assignment
std::string age;

int main() {
    std::getline(std::cin, my_name); // read a full line of text into age
    std::cin >> age;
    std::cout << my_name << age;
}