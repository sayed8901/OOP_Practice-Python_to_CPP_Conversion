# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

n = int(input())
t = n

for i in range(n):
    for j in range(t):
        print("*", end="")  # Use `end=""` to print stars on the same line
    t -= 1
    print()  # Move to the next line after printing all stars for the current row
