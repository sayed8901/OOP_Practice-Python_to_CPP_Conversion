# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

a = input().strip() 
b = input().strip() 

# Compare the two strings lexicographically
if a < b:
    print(a)  # If a is smaller, print a
elif a > b:
    print(b)  # If b is smaller, print b
else:
    print(a)  # If both strings are equal, print a
