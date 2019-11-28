#include <iostream>

enum Hero_Traits {
    MAX_HEALTH,
    MAX_STAMINA,
    MAX_SPEED,
    MAX_AGILITY,
    MAX_STRENGTH,
    MAX_INTELLECT
};

void print_switch_traits(Hero_Traits trait) {
    switch (trait) {
    
        case MAX_INTELLECT:
            std::cout << "Max Intellect Granted\n";    
            break;
        case MAX_AGILITY:
            std::cout << "Max Agility Granted\n";    
            break;
        case MAX_STRENGTH:
            std::cout << "Max Strength Granted\n";    
            break;
        case MAX_SPEED:
            std::cout << "Max Speed Granted\n";    
            break;
        case MAX_HEALTH:
            std::cout << "Max Health Granted\n";    
            break;    
        default:
            std::cout << "Unknown";
            break;
    }
}
void print_hero_traits(Hero_Traits trait) {
    if (trait == MAX_AGILITY) {
        std::cout << "Max Agility Granted\n";
    }
    if (trait == MAX_SPEED) {
        std::cout << "Max Speed Granted\n";
    }
    if (trait == MAX_STAMINA) {
        std::cout << "Max Stamina Granted\n";
    }
    if (trait == MAX_STRENGTH) {
        std::cout << "Max Strength Granted\n";
    }
    if (trait == MAX_HEALTH) {
        std::cout << "Max Health Granted\n";
    }
    if (trait == MAX_INTELLECT) {
        std::cout << "Max Intellect Granted\n"; 
    }
}

int main() {
    print_hero_traits(MAX_INTELLECT);
    print_switch_traits(MAX_AGILITY);
}