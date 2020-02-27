/*
Now let's put pointers to use. This program uses a function named double_it,
which doubles a variable passed to it or, rather, doubles a variable whose address is passed to it.

*/
#include <iostream>
using namespace std;

void double_it(int *p);

int main() {
    int a = 5, b = 6;
    cout << "Val. of 'a' before doubling : " << a << endl;
    cout << "Val. of 'b' before doubling : " << b << endl;
    double_it(&a);
    double_it(&b);
    cout << "Val. of 'a' after doubling : " << a << endl;
    cout << "Val. of 'b' after doubling : " << b << endl;
    return 0;
}
void double_it(int *p) {
    *p = *p * 2;
}