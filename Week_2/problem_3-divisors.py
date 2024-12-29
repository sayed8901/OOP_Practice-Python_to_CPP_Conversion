# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

n = int(input())

for i in range(n, 0, -1):
    if n % i == 0:
        divisor = n // i
        print(divisor)
