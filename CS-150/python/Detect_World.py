class Detect_World:
    def __init__(self):
        self.scnr = input()
    def main(self):
        # tenary conditional.
        print("Goodbye" if self.scnr == "Quit" else "Hello")
Detect_World().main()
#Finshed