#include <iostream>

// block statements should be introduced 2nd week latest. (the first technicals taught)

// Introduction to function formatting -- statement layout -- introduction to more complicated if/else/switch statements etc,.

int add(int x, int y) { // opening block{1}
    if ((x > 0) && (y > 0)) { // opening block{2}
        return (x + y);
    }
    return 1; // closing block{2}
} // closing block{1}

int main() {
    int add(int x, int y);
    printf("%d",add(5,-3));
}