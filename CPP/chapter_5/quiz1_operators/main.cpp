#include <iostream>
#include "operators.h"
// Sample problem
// x = 2 + 3 % 4
// Binary operator % has higher precedence than operator + or operator =, so it gets evaluated first:
// x = 2 + (3 % 4)
// Binary operatort + has a higher precedence than operator =, so it gets evaluated next:
// Final answer: x = (2 + (3 % 4))
// We now no longer need the table above to understand how this expression will evaluate.
//
// Begin quiz 1:
// You know from everyday mathematics that expressions inside of parentheses get evaluated first. For example, in the expression (2 + 3) * 4, the (2 + 3) part is evaluated first.
// For this exercise, you are given a set of expressions that have no parentheses.
// Using the operator precedence and associativity rules in the table above, add parentheses to each expression to make it clear how the compiler will evaluate the expression.
//

int main () {
	std::cout << problem_1() << '\n';
	std::cout << problem_2() << '\n';
    std::cout << problem_3() << '\n';
	std::cout << problem_4() << '\n';
}
