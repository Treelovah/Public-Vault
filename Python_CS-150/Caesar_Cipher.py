# /**
#  *  A simple Caesar Cipher encrypter and decrypter.
#  *
#  * @author Marshall Livingston <br>
#  *         mltechi@rams.colostate.edu <br>
#  *         Computer Science Department <br>
#  *         Colorado State University
#  * @version 201990
#  */

class Caesar_Cipher:

    def __init__(self, message):
        self.message = message.lower()
        # add here as you go

    def shift(self, shift):
        message = self.message
        i = 0
        while i < len(message):
            i += 1
            for ch in message:
                print(ord(ch))
            break
        


test_1 = Caesar_Cipher('HELLO')
print(test_1.shift(2))