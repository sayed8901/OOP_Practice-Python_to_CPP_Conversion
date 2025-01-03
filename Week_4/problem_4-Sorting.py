# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

""" 
Note:
* Don't use built-in-functions.
* try to solve it with bubble sort algorithm or Selection Sort.  
"""


n = int(input())
ar = list(map(int, input().split()))

# Bubble sort algorithm
for i in range(n - 1):
    for j in range(i + 1, n):
        if ar[i] > ar[j]:
            # Swap elements
            temp = ar[i]
            ar[i] = ar[j]
            ar[j] = temp

# Print the sorted array
for num in ar:
    print(num, end=" ")
