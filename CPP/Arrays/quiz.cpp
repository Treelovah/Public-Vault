#include <iostream>
#include <string>
#include <iterator>

/*
Quiz

1) Print the following array to the screen using a loop:
1
	
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

Hint: You can use std::size (as of C++17) or the sizeof() trick (prior to C++17) to determine the array length.
*/
unsigned int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

void math() {
    for (int i : array) {
        std::cout << i << ' ';
    }
    std::cout << "\nThere are: " << std::size(array) << " elements in the array." << '\n';
}


/*


2) Given the array in question 1:

Ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9, repeatedly ask for an integer value until they do. Once they have entered a number between 1 and 9, print the array. Then search the array for the value that the user entered and print the index of that element.

You can test std::cin for invalid input by using the following code:
*/

// Print the following array to the screen using a loop:

int get_user_input() {
    using namespace std;
    cout << "Enter a number 1-9: ";
    unsigned short user_input{};
    cin >> user_input;
    cin.ignore(32727, '\n');
    if (cin.fail()) {
        cin.clear();
        cout << "Input failed.\n";
        get_user_input();
        return 1;
    }
    if ((user_input < 1) || (user_input > 9)) {
        cout << "# out-of-bounds,\n";
        get_user_input();
    } else {
        cout << "You entered: " << user_input << '\n';
    }
    return 0;
}
int main() {
    math();
    get_user_input();
}