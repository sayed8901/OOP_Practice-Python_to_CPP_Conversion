# https://codeforces.com/group/MWSDmqGsZm/contest/219432/my

n = int(input())
s = n - 1         # Spaces before the first '*'
t = 1             # Number of '*' to print on the first row

for i in range(1, 2 * n + 1):
    print(" " * s, end="")  # Print leading spaces
    print("*" * t)          # Print stars

    # Update spaces and stars based on current row
    if i < n:
        s -= 1
        t += 2
    elif i > n:
        s += 1
        t -= 2
