#include <iostream>
#include <cstdlib> // for std::rand() && std::srand()
#include <ctime>

// This is a mediocre method. Prefer to use a 3rd party module like 'random.hpp' which is Effolkronium's library
int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::cout << std::rand() << '\t';
}
