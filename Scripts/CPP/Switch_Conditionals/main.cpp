// Conditionals
#include <iostream>

struct Hero {
    double speed;
    double agility;
    double strength;
    double intellect;
    int dickTest()
    {
        return 8;
    }
};

int switch_case(int num)
{
    Hero hero;
    switch (num)
    {
    case 1:
        return hero.dickTest();
        break;
    default:
        return 0;
        break;
    }
}

int main() {
    printf("%d ",switch_case(1));
}