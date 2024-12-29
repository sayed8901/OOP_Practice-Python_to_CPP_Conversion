# https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

a, b, c, d = map(int, input().split())

if a + b - c == d:
    print("YES")
elif a + b * c == d:
    print("YES")
elif a - b + c == d:
    print("YES")
elif a - b * c == d:
    print("YES")
elif a * b + c == d:
    print("YES")
elif a * b - c == d:
    print("YES")
else:
    print("NO")
