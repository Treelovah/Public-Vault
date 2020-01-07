import time
# time is imorted so we can use the time.sleep commands, to give our program a couple seconds break here and there to make it flow better
ans_n = ("no", "nope", "nah", "fuck off")
# ans_n makes it easier for the user to type in whatever he wants (guessing what he/she would want to type) to make the program seem more personal.


def play():
    print("whole numbers only! no one cares about halves or quarters..")
    time.sleep(2)
    A = input("Wanna know if your penis is above average? ").lower()
    if A in (ans_n):
        exit()
    else:
        main()






def main():
    C = int(input("Enter yo dick size nigga: "))
    if C >= 8:
        print("damn nigga yo dick huge!")
        time.sleep(3)
        print("the results have been saved and uploaded to the web. thanks for participating!")
        time.sleep(2)
    elif C <= 8:
        print("damn nigga look at that lil dick!")
        time.sleep(3)
        print("the results have been saved and uploaded to the web. thanks for participating!")
        time.sleep(2)
    play_again()





def play_again():
    B = input("Wanna go again? ").lower()
    if B in (ans_n):
        print("aight bitch, peace.")
        time.sleep(1)
        exit()
    else:
        main()

play()
