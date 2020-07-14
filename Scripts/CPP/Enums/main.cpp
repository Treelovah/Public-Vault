#include <iostream>

enum Color {

    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA,
};
// use of switch statements would be waaay better
void print_color(Color color)
{
    if (color == COLOR_BLACK)
        std::cout << "Black";
    else if (color == COLOR_RED)
        std::cout << "Red";
    else if (color == COLOR_BLUE)
        std::cout << "Blue";
    else if (color == COLOR_GREEN)
        std::cout << "Green";
    else if (color == COLOR_WHITE)
        std::cout << "White";
    else if (color == COLOR_CYAN)
        std::cout << "Cyan";
    else if (color == COLOR_YELLOW)
        std::cout << "Yellow";
    else if (color == COLOR_MAGENTA)
        std::cout << "Magenta";
    else
        std::cout << "Who knows!";
}

int main(int argc, char const *argv[])
{
    print_color(COLOR_RED);
    return 0;
}
