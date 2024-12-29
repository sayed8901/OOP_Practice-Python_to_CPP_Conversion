# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

n = int(input())
ar = list(map(int, input().split()))

# To print the array in reversed order
for i in range(n - 1, -1, -1):
    print(ar[i], end=" ")
