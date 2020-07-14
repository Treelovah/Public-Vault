#include <iostream>

using namespace std;

namespace Test
{
    enum symbol
    {
        PLUS = '+',
        SUBTRACT = '-',
        MULTIPLY = '*',
        DIVIDE = '/',
    };

    struct User
    {
        double num1, num2;
        char symbol;
    };

    struct Math
    {
        double add(const double &num1, double &num2) { return num1 + num2; }
        double sub(const double &num1, double &num2) { return num1 - num2; }
        double mul(const double &num1, double &num2) { return num1 * num2; }
        double div(const double &num1, double &num2) { return num1 / num2; }
    };
}


int main(int argc, char const *argv[])
{
    double result;
    Test::User user;
    Test::Math math;
    // get number1
    cin >> user.num1;
    // get symbol
    cin >> user.symbol;
    // get number2
    cin >> user.num2;

    switch (user.symbol)
    {
    case Test::PLUS:
        result = math.add(user.num1, user.num2);
        break;
    case Test::SUBTRACT:
        result = math.sub(user.num1, user.num2);
        break;
    case Test::DIVIDE:
        result = math.div(user.num1, user.num2);
        break;
    case Test::MULTIPLY:
        result = math.mul(user.num1, user.num2);
    default:
        break;
    }
    cout << result << endl;
    return 0;
}


