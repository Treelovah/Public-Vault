# Factorial Equations

# Input number to take factorial of, n

# Compute facorial of n, fact

# Output fact

# Initialize the accumulatar variable

# Loop until final result is reached

# update the value of accumulator variable
import time

print("Thank you for choosing an ML-Techi product")
time.sleep(2)
print("Remember to visit us @ www.mltechi.com")
time.sleep(1)


def again():
	A = input("Would you like to run it again? y/n ")
	if A == "y":
		main()
	else:
		exit() 


def main():
	n = int(input("Please enter a whole number: "))
	fact = 1
	for factor in range(n,1,-1):
		fact = fact * factor
	print("The factorial of", n, "is", fact)
	again()

main()