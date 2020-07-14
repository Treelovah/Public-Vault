#include <iostream>
#include <string>

// Quiz 1, loop over the array
namespace Quiz_1 {
    int array[]{4, 5, 6, 7, 3, 8, 2, 1, 9, 5};
    int quiz_1() {
        for (int i : Quiz_1::array) {
            printf("%d, ", static_cast<int>(i));
        }
        std::cout << '\n';
        return 0;
    }
}


// Quiz 2, Ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9, repeatedly ask for an integer value until they do. 
// Once they have entered a number between 1 and 9, print the array. 
// Then search the array for the value that the user entered and print the index of that element.
namespace Quiz_2 {
    void get_number() {
        short new_number;
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> new_number;
        if (new_number >= 1 && new_number <= 9) {
            std::cout << "The matching array index is: " << Quiz_1::array[new_number] << '\n';
        } else {
            std::cin.clear();
            std::cin.ignore(32727, '\n');
            std::cout << "Error\n";
            get_number();
        }
    }
}

int main() {
    Quiz_1::quiz_1();
    Quiz_2::get_number();
    return 0;
}