# month2.py

# A program to print the month abbreviation, given its number

import time

print("Thank you for choosing an ML-Techi product")
time.sleep(2)
print("Please visit us @ www.mltechi.com\n")
time.sleep(2)
def main():

	# months is a list used as a lookup table
	months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]

	n = int(input("Enter a month number (1-12): "))

	print("The month abbreviation is", months[n-1] + ".")


main()