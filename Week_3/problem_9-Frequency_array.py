# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

n, m = map(int, input().split())
ar = list(map(int, input().split()))

# Creating a list of size m+1 to hold the count index
count_arr = [0] * (m + 1)

# Increment count_arr[value] if searched number matches
for value in ar:
    count_arr[value] += 1

# Printing the count results
for i in range(1, m + 1):
    print(count_arr[i])
