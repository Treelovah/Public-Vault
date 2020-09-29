"""
Task
Given an integer, N , perform the following conditional actions:

If  N is odd, print Weird
If  N is even and in the inclusive range of  to , print Not Weird
If  N is even and in the inclusive range of  to , print Weird
If  N is even and greater than , print Not Weird
Input Format

A single line containing a positive integer, N.

Constraints

Output Format

Print Weird if the number is weird. Otherwise, print Not Weird.

Sample Input 0

3
Sample Output 0

Weird
"""


def weird_or_not(n):
    if 1 <= n <= 100:
        print("Weird") if n % 2 == 1 or (n % 2 == 0 and n in range(6, 21)) else print("Not Weird")


if __name__ == '__main__':
    weird_or_not(20)

