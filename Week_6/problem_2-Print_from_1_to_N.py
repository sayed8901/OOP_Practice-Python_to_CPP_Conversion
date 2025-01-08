# https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

def num_print_recur(i, n):
    if i > n:
        return
    print(i)
    num_print_recur(i + 1, n)

n = int(input())
num_print_recur(1, n)
