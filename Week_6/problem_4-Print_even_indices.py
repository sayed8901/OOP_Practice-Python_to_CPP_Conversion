# https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

def even_num_fun(ar, n, i):
    if n < i + 1:
        return
    
    # Check if the index is even
    if n % 2 != 0:
        print(ar[n - 1], end=" ")

    even_num_fun(ar, n - 1, i)


# taking inputs
n = int(input())
ar = list(map(int, input().split()))
i = 0

even_num_fun(ar, n, i)
