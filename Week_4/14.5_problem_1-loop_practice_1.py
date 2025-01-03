# Problem Statement: Take a positive integer N as input and print the pattern shown in the sample input output.

""" sample input: 5

output:
    *
   **
  ***
 ****
***** 

"""


n = int(input())

s = n - 1
t = 1

for i in range(1, n + 1):
    for j in range(1, s + 1):
        print(" ", end="")
    for k in range(1, t + 1):
        print("*", end="")

    s -= 1
    t += 1
    
    print()
