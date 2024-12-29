# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

n = int(input())
ar = list(map(int, input().split()))

sum_val = sum(ar)

# Convert sum to its absolute value if negative
if sum_val < 0:
    sum_val = abs(sum_val)

print(sum_val)
