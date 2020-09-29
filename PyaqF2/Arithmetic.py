"""
The provided code stub reads two integers from STDIN, 'a', and 'b'.

Add code to print three lines w here:
    1. The first line contains the sum of the two numbers.
    2. The second line contains the difference of the two number (first - second).
    3. The third line contains the product of the two numbers

    Example:
        a = 3
        b = 5

    prints the following
        8
        -2
        15
TODO: print(sum(a,b))
TODO: print(a - b)
TODO: print(a * b)
"""
import EzMath

if __name__ == '__main__':
    a = int(input("Enter number: "))
    b = int(input("Enter another: "))

    solution = EzMath(a, b)

    solution.sum()
    solution.difference()
    solution.product()
