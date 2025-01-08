# https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

def num_reverse_print_recur(n):
    if n <= 0:
        return
    print(n, end=" ")
    num_reverse_print_recur(n - 1)

n = int(input())
num_reverse_print_recur(n)
