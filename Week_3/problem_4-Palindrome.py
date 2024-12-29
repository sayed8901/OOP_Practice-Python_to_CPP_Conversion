# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

s = input()

# implicitly loops to reverse the string and compares it with the original to check if the string is a palindrome or not
if s == s[::-1]:
    print("YES")
else:
    print("NO")
