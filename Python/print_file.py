# <file>.read() Returns the entire remaining contents of the file as a single (potentially large, multi-line) string.

# <file>.readline() Returns the next line of the file. That is, all text up to and including the next newline character.

# <file.readlines() Returns a list of the remaining lines in the file. Each list item is a single line including the newline character at then end.

# Example

# printfile.py
		# prints a file to the screen.

def main():
	fname = input("Enter filename: ")
	infile = open(fname, "r")
	data = infile.read()
	print(data)


main()