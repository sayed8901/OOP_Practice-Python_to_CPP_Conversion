# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

n = int(input())
ar = [] # Initialize an empty list to store the matrix

for i in range(n):
    # Read a row of the matrix 
    # Eaxmple: 1 2 3 for first i
    # then 4, 5, 6 for first i
    # &, finaly 7, 8, 9 for last i
    row = list(map(int, input().split()))

    # Append the row to the matrix list
    ar.append(row)


primary_diagonal_sum = 0
secondary_diagonal_sum = 0


# assume i for row and j foe column traversal
for i in range(n):
    for j in range(n):
        if i == j:
            primary_diagonal_sum += ar[i][j]
        if i + j == n - 1:
            secondary_diagonal_sum += ar[i][j]


print(abs(primary_diagonal_sum - secondary_diagonal_sum))
