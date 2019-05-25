# quadratic.py

# A program that computes the real roots of a quadratic equation.

# Illustrates use of the math library.

# Note: This program crashes if the equation has no real roots.

import math # Makes the math library available.
import time

print("Thank you for choosing an ML-Techi product")
time.sleep(2)
print("Remember to visit us @ www.mltechi.com")
time.sleep(2)


def main():
	print("This program finds the real solutions to a quadratic")
	print()

	a = float(input("Enter coefficient a: "))
	b = float(input("Enter coefficient b: "))
	c = float(input("Enter coefficient c: "))

	discRoot = math.sqrt(b * b - 4 * a * c)
	root1 = (-b + discRoot) / (2 * a)
	root2 = (-b - discRoot) / (2 * a)

	print()
	print("The solutions are: ", root1, root2)


main()

# This program makes use of the square root function sqrt from the math library module.