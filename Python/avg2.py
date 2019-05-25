# a simple program to average three exam scores
# going to be helpful at Boulder
import time

def main():
    print("This program computes the average of three exam scores.")
    time.sleep(2)
    score1, score2, score3 = eval(input("Enter three scores separated by a comma: "))
    average = (score1 + score2 + score3) / 3

    print("The average of the scores is:", average)


def again():
	ans = eval(input("Would you like to assess again? y/n: ")).lower()
	if ans == "yes":
		main()
	else:
		print("Thank you for using an ML-Techi product")
		time.sleep(2)
		exit()
main()
