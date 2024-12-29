# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

n = int(input())
s = input()

sum = 0

for i in range(n):
    sum += int(s[i])

print(sum)
