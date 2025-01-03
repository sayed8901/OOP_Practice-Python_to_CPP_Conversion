# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

n = int(input())  # Read the input number of rows
s = n - 1  # Spaces before the first '*'
t = 1  # Number of '*' to print on the first row

for i in range(1, n + 1):
    print(" " * s, end="")  # Print leading spaces
    print("*" * t)          # Print the stars
    s -= 1
    t += 2
