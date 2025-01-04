# https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

# Function to find the maximum number
def max_num(ar):
    max_val = float('-inf')     # same as INT_MAX of c or cpp

    for num in ar:
        if num > max_val:
            max_val = num
    return max_val

# Function to find the minimum number
def min_num(ar):
    min_val = float('inf')      # same as INT_MIN of c or cpp

    for num in ar:
        if num < min_val:
            min_val = num
    return min_val

# Reading input
n = int(input())
ar = list(map(int, input().split()))

# Finding max and min
max_val = max_num(ar)
min_val = min_num(ar)

print(min_val, max_val)
