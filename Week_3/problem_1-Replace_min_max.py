# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

n = int(input())
ar = list(map(int, input().split()))

min_val = min(ar)
max_val = max(ar)

min_index = ar.index(min_val)
max_index = ar.index(max_val)

for i in range(n):
    if i == min_index:
        ar[i] = max_val
    elif i == max_index:
        ar[i] = min_val

    print(ar[i], end=" ")
