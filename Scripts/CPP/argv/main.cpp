#include <iostream>
#include <sstream> // for std::stringstream
#include <cstdlib> // for std::exit()

int main(int argc, char const *argv[]) {
    if (argc <= 1) {
        if (argv[0]) {
            std::cout << "Usage: " << argv[0] << " <numbers>" << '\n';
        } else {
            std::cout << "Usage: <program name> <number>" << '\n';
        } std::exit(1);
    }
    std::stringstream convert(argv[1]); // set up a stringstream variable named convert, initialized with the input from argv[1]
    int myint;
    if (!(convert >> myint)) //do the conversion
        myint = 0;
    
    std::cout << "Got integer: " << myint << '\n';
}
