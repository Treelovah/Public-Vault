# convert.py
#    A program to convert Celsius temps to Fahrenheit
# by: Marshall Livingston
import time
print("This program is used for Celsius to Farhenhiet conversion. It is in beta testing and will be updated when author has time.")
time.sleep(2)
print("Thank you for choosing an ML-Techi product.")
time.sleep(1)

#def ending():
 #   C = input("type 'n' to quit or type, 'y' to continue to program ").lower()
  #  if C == "n":
   #     exit()
    #   main()
    #else:
     #   ending()
def main():
    for x in range(5):  
        C = int(input("What is the Celsius Temp? "))
        F = 9/5 * C + 32
        if C >= 14:
            print("Temp is", F, "degrees Fahrenheit. Enjoy the warmth!")    
        elif C <= 14:
            print("Temp is", F, "degrees Fahrenheit. Dress warmly!")
        else:
            main()

main()
