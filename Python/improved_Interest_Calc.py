# This program shows the details of the loan

# will take the input values from user

# A product of ML-Techi
import time

print("Thank you for choosing an ML-Techi product")
time.sleep(2)
print("Remember to visit us @ www.mltechi.com")
time.sleep(1)


principal = float(input("Please enter the total loan amount taken: "))
interest_rate = float(input("Now enter the annual interest rate applied: "))
duration = int(input("Finally, add in the loan duration in years: "))

# ---function for monthly loan amount calculation---
def monthly_loan(principal,interest_rate,duration):
    n = duration*12 #total number of months
    r = interest_rate/(100*12) #interest per month
    monthly_payment = principal*((r*((r+1)**n))/(((r+1)**n)-1)) #formula for compound interest applied on monthly payments.
    return monthly_payment

# ---function for remaining loan balance calculation---
def remaining_bal(principal,annual_interest_rate,duration,payments):
    r = annual_interest_rate/1200 # monthly interest rate
    m = r + 1
    n = duration*12 # duration in months
    
    # remaining balance using compound interest formula
    remaining = principal*(((m**n)-(m**payments))/((m**n)-1))
    return remaining

monthly = monthly_loan(principal,interest_rate,duration)

print("Loan amount: ",principal," Interest rate: ",interest_rate)

print("Duration (Years): ",duration," Monthly payment: ",int(monthly))

for x in range(1,duration+1):
    mon = x*12
    rem = remaining_bal(principal,interest_rate,duration,mon)
    print("Year: ",x," Balance remaining: ",int(rem)," Total payments: ",int(monthly*mon))