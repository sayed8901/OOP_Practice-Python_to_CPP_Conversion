# https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

# Function to print numbers from 1 to n
def print_fun(n):
    for i in range(1, n + 1):
        print(i, end=" " if i < n else "")

n = int(input())    # Reading input
print_fun(n)        # Calling the function
