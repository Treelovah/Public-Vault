/*
Write a program to call a function triple_it that takes the address of an int and triples the value pointed to.
Test it by passing an argument n, which is initialized to 15.
Print out the value of n before and after the function is called. 
(Hint: The function should look similar to double_it in)
*/

#include <iostream>

void triple_it(int *n);

int main() {
    int a = 15;
    printf("'a' before triple is: %d\n",a);
    triple_it(&a);
    printf("'a' after triple is: %d\n",a);
    return 0;
}

void triple_it(int *n) {
    *n = *n * 3;
}