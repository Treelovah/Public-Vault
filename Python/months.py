# months.py

# A program to print the abbreviation of a month, given its number

import time

print("Thank you for choosing an ML-Techi product.")
time.sleep(2)
print("Please visit us @ www.mltechi.com")
time.sleep(2)

def main():
	# months is used as a lookup table
	months = "JanFebMarAprMayJunJulAugSepOctNovDec"

	n = int(input("Enter a month number (1-12): "))

	# compute starting position of month n in months
	pos = (n-1) * 3

	# Grab the appropriate slice from months
	monthAbbrev = months[pos:pos+3]
	print("The month abbreviation is", monthAbbrev + ".")


main()