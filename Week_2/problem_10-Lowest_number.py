# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

n = int(input())
ar = list(map(int, input().split()))

lowest_num = float('inf')  # Equivalent to INT_MAX in C++
lowest_num_index = -1

for i in range(n):
    if ar[i] < lowest_num:
        lowest_num = ar[i]
        lowest_num_index = i + 1  # 1-based index

print(lowest_num, lowest_num_index)
