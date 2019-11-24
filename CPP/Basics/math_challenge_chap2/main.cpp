#include "io.h"
int main () {
    int x = read_numbers();
    int y = read_numbers();
    write_answer(add(x,y));
    return 0;
}
