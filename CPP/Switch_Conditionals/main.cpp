// Conditionals
#include <iostream>

// If/else if/else
bool hero_test(int a, int b, int c, int d) {
    if (d >= 10) {
        if (c >= 10) {
            if (b >= 10) {
                if (a >= 10) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        } else {
            return false;
        }
    } return false;
}

struct Hero {
    double speed{};
    double agility{};
    double strength{};
    double intellect{};
};

int main() {
    Hero user;
    user.speed = 9;
    user.agility = 16;
    user.strength = 17;
    user.intellect = 16;
    if (hero_test(user.speed, user.agility, user.strength, user.intellect) == 1) {
        std::cout << "True";
    } else {
        std::cout << "False";
    }
}