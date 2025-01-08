# https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

a, b, k = map(int, input().split())

if a % k == 0 and b % k == 0:
    print("Both")
elif a % k == 0 and b % k != 0:
    print("Memo")
elif a % k != 0 and b % k == 0:
    print("Momo")
else:
    print("No One")
