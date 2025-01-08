# https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

def square_or_rectangle_checker(a, b):
    if a == b:
        return "Square"
    else:
        return "Rectangle"

n = int(input())

results = []  # To store results here

for _ in range(n):
    a, b = map(int, input().split())  # Read the pair of numbers
    results.append(square_or_rectangle_checker(a, b))  # Add result to the list

# After all inputs are read, print all results
for result in results:
    print(result)
