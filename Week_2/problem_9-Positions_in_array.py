# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

n = int(input())
ar = list(map(int, input().split()))

for i in range(n):
    if ar[i] <= 10:
        print(f"A[{i}] = {ar[i]}")
