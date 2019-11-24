#include <iostream>

// A **Variable Scope** : Determines where a avariable IS accessible
// A **Variables Duration** : determines where it is created and destroyed. 
// Both concepts are often linked.

// Something that is tricky at first, but worth keeping in mind

int main() {
    int apples{5}; // Created and initialized to 5;
    if (apples <= 5) {
        int apples{}; // Reinitialization and creation of apples variable (this is how the 2 dont get confused, and hold unique values);
        apples = 10;
        std::cout << apples << '\n';
    }
    std::cout << apples << std::endl; // After if closing block
}