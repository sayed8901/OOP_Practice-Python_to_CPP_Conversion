# https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/divisible-by-5-or-not

# Reading input
n = int(input())

# Loop through numbers from 1 to n
for i in range(1, n + 1):
    if i % 5 == 0:
        print(f"{i} Yes")
    else:
        print(f"{i} No")
