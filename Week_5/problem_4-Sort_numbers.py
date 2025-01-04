# https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

# Input three integers
n1, n2, n3 = map(int, input().split())

# Store in a list
ar = [n1, n2, n3]

# Sorting process
for i in range(2):
    for j in range(i + 1, 3):
        if ar[i] > ar[j]:
            temp = ar[i]
            ar[i] = ar[j] 
            ar[j] = temp

# Print numbers in ascending order
for num in ar:
    print(num)

# Print the values in the sequence as they were read
print()

print(n1)
print(n2)
print(n3)
