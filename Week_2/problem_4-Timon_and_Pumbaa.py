# https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A

a, b = map(int, input().split())

difference = a - b

if difference >= 0:
    print(difference)
else:
    print(0)
