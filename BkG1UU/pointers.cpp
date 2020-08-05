#include <iostream>
#include <cstdio>

int main(int argc, char const *argv[])
{
    std::string name{ "Marshall" };
    std::string *p{ &name };

    std::cout << "value of *p: " << *p << '\n';
    std::cout << "value of p: " << p << '\n';
    std::cout << "value of &p: " << &p << '\n';
    
    return 0;
}
