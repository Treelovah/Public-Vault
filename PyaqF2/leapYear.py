"""
Task

Given a year, determine whether it is a leap year. If it is a leap year, return the Boolean True, otherwise return False.

Note that the code stub provided reads from STDIN and passes arguments to the is_leap function. It is only necessary to complete the is_leap function.

TODO: code the trinity
    if (4, 100, 400):
        if (100, 400):
            if (400):
                leap year
            not leap year
        leap year
    else:
        not leap year
"""


def trinity(year):
    if 1900 <= year <= 10 ** 5:
        a = year % 4 == 0
        b = year % 100 == 0
        c = year % 400 == 0
        ly = False

        if a or b or c:
            ly = True
            if b or c:
                ly = False
                if c:
                    ly = True
    return ly


if __name__ == '__main__':
    print(trinity(1990))
    print(trinity(2000))
    print(trinity(2020))
