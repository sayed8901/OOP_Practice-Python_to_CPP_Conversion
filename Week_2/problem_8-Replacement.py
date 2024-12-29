# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

n = int(input())
ar = list(map(int, input().split()))

for i in range(n):
    if ar[i] > 0:
        ar[i] = 1
    elif ar[i] < 0:
        ar[i] = 2

print(*ar)
