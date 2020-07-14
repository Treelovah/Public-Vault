#include <iostream>
#include <string>

enum Family {
    MARSHALL,
    ERIN,
    KAYCEE,
    WINTER,
    EMBER,
    EVERYONE,
};

int main(int argc, char const *argv[]) {
    int family_members_age[EVERYONE];
    family_members_age[MARSHALL] = 28;
    std::cout << family_members_age[MARSHALL];
    return 0;
}
