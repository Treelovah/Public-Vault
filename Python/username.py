# username.py

# Simple string processing program to generate usernames.
import time

print("Thank you for choosing an ML-Techi product")
time.sleep(2)
print("Remember to visit us @ www.mltechi.com\n")
time.sleep(2)


def main():
	print("This program generates computer usernames. \n")
	
	# get user's first and last names
	first = input("Please enter your first name: ").lower()
	last = input("Please enter your last name: ").lower()

	# concatenate first initial with 10 chars of the last name.
	uname = first[0] + last[:10]

	# output the username

	print("Your username is:", uname)


main()