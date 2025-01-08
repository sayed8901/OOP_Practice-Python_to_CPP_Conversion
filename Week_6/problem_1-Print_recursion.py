# https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

def recursion_fun(n):
    if n <= 0:
        return
    print("I love Recursion")
    recursion_fun(n - 1)

n = int(input())
recursion_fun(n)
