# change2.py

# A program to calculate the value of some change in dollars


import time


def main():
	print("Change Counter\n")
	print("Please enter the count of each coin type.")
	quarters = int(input("Quarters: "))
	dimes = int(input("Dimes: "))
	nickles = int(input("Nickles: "))
	pennies = int(input("Pennies: "))
	total = .25*quarters + .10*dimes + .05*nickles + .01*pennies
	print()
	print("the total value of your change is ${0}.{1:0>2}".format(total//100, total%100)) # here the {} represent {<index>:<format-specifier>}
	# the index tells which of the parameters is inserted into the slot.
																	#the index portion of the slot is optional
	time.sleep(2)
	print("Thank you for choosing an ML-Techi product")
	time.sleep(1)
	print("Remember to visit us @ www.mltechi.com")


main()
