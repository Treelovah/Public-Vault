# userfile.py

# program to create a file of usernames in batch mode.

# importing tkinter.filedialog import askopenfilename, asksavefilename

import time

from tkinter.filedialog import askopenfilename, asksaveasfilename

def main():
	print("This program creates a file of usernames from a")
	print("file of names.")

	# get file names
	infileName = askopenfilename()
	outfileName = asksaveasfilename()

	# open the files
	infile = open(infileName, "r")
	outfile = open(outfileName, "w")

	# process each line of the input file
	for line in infile:
		# get the first and last names from line
		first, last = line.split()
		# create username
		uname = (first[0]+last[:7]).lower()
		# write it to output file
		print(uname, file=outfile)

	# close both files
	infile.close()
	outfile.close()

	print("Usernames have been written to", outfileName)


main()