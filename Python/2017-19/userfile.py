# userfile.py

# program to create a file of usernames in batch mode.
# importing tkinter.filedialog import askopenfilename, asksavefilename

from tkinter.filedialog import askopenfilename, asksaveasfilename

def main():
	print("This program creates a file of usernames from a")
	print("file of names.")

	# get file names
	infileName = input("What file are the names in? ")
	outfileName = input(" What file should the usernames go in? ")

	# open the files
	infile = open(infileName, "r")
	outfile = open(outfileName, "w")

	# process each line of the input file
	for i in infile:
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