# https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

n, k = map(int, input().split())  # Read n and k
ar = list(map(int, input().split()))  # Read the array of integers

# Sorting the array in descending order
ar.sort(reverse=True)

sum_value = 0

# Summing till k-th value using the descending sorted array
for i in range(k):
    if ar[i] > 0:  # To handle negative values
        sum_value += ar[i]

print(sum_value)
