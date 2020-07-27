#include <iostream>
#include <string>

void reverse_string(std::string& str) {
    int n = str.length();

    // swap char starting from two corners ^_^;
    for (int i = 0; i < n / 2; ++i) {
        std::swap(str[i], str[n - i - 1]);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    std::string arr;
    std::getline(std::cin, arr);
    reverse_string(arr);
    std::cout << arr << std::endl;
    return 0;
}