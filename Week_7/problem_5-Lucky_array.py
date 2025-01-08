# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

n = int(input())
ar = list(map(int, input().split()))  # Read the array of integers

# Find the minimum element in the array
minimum_element = min(ar)

# Count how many times the minimum element appears
count = ar.count(minimum_element)

# Check if the count of the minimum element is odd or even
if count % 2 != 0:
    print("Lucky")
else:
    print("Unlucky")
