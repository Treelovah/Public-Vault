
def decode():
	print("This program converts a sequence of Unicode numbers into \nthe string of text that it represents.\n")

	inString = input("Please enter the Unicode-encoded message: ")

	dec_message = ""
	for numStr in inString.split():
		codeNum = eval(numStr) # converts digits to a number
		dec_message = dec_message + chr(codeNum)	# concatentates character to message
		print(":\nThe decoded message is: ", dec_message)
	again()


def encode():
	print("This program converts a textual message into a sequence \nof numbers representing the Unicode encoding of the message.\n")

	message = input("Please enter the message to encode: ")
	
	print("\nHere are the Unicode codes: ")

	for ch in message:
		print(ord(ch), end=" ")
	print()
	again()

def again():
	A = input("Would you like to Encode or Decrypt? 'E' or 'D': ").upper()
	if A == 'E':
		encode()
	elif A == 'D':
		decode()
	else:
		again()

again()
