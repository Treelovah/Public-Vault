#include <iostream>
#include <iterator> // for std::size
#include <string>


namespace KryptSec {
    namespace officers {
    std::string names[7] {"Marshall", "Deejay", "Rex", "Cole", "Drew", "Benny", "Thomas"};
    
    }
}

// Passing an array to a function looks normal, but actually is QUITE different.
// It passes the actual array, not the unit.

void pass_value(int value) {
    value = 99;
}

void pass_array(int prime[5]) {
    prime[0] = 1;
    prime[1] = 2;
    prime[2] = 3;
    prime[3] = 4;
    prime[4] = 5;
}

int main() {
    for (std::string i : KryptSec::officers::names) {
        std::cout << i << '\n';
    }

    int value = 1;
    std::cout << "before pass_value: " << value << '\n';
    pass_value(value);
    std::cout << "after pass_value: " << value << '\n'; // this stays the same, becuase the actual input that was passed through pass_value was a copy of the variable, not the actual variable.
    
    int prime[5] = {2, 3, 5, 7, 11};
    std::cout << "before pass_array: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
    pass_array(prime); // this looks like im passing a variable, which, from above we now know is only a copy, and wont change.  BUT it actually is passing the literal, original array! so it does change.
    std::cout << "after pass_array: " << " " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';




    //grabbing the size of list is important sometimes too, and that can be tricky, heres a reminder
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "The array has: " << std::size(array) << " elements.\n";
}