# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

# Input number of rows and columns
row, col = map(int, input().split()) 
ar = []

# Taking input 2D array elements
for i in range(row):
    row_elements = list(map(int, input().split()))
    ar.append(row_elements)


num_search = int(input())  # Input number to search
flag = 0


# Searching for the number
for i in range(row):
    for j in range(col):
        if num_search == ar[i][j]:
            flag = 1
            break


# Printing "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".
if flag == 1:
    print("will not take number")
else:
    print("will take number")
