#include <iostream>

// validating user input with std::cin

bool char_check(char a) {
    if ((a >= 65) && (a <= 126)) {
        return true;
    } else {
        return false;
    }
}

bool int_check(int a) {
    if ((a >= 0) && (a <= 32)) {
        return true;
    } else {
        return false;
    }
}

char get_char() {
    using namespace std;
    cout << "Enter a char: ";
    char a{};
    cin >> a;
    if (cin.fail()) {
        cin.clear();
        get_char();
        return 22;
    } else {
        cin.ignore(32727, '\n'); // sexy af..seriously.
        if (char_check(a)) {
            cout << a << '\n';
            return 0;
        } else {
            get_char();
            return 22;
        }
    }
}

unsigned short get_num() {
    using namespace std;
    cout << "Enter a num: ";
    int a{};
    cin >> a;
    if (cin.fail()) {
        cin.clear();
        get_num();
    } else {
        if (int_check(a)) {
            cout << a << '\n';
        } else {
            get_num();
        }
    }
    return 0;
}

int main() {
    get_char();
    get_num();
}