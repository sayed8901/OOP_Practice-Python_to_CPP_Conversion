# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

# Input two strings
str_1 = input()
str_2 = input()

# Output the lengths of both strings
print(len(str_1), len(str_2))

# Output the concatenated result of both strings
print(str_1 + str_2)

# Swap the first characters of both strings
first_of_1 = str_1[0]
first_of_2 = str_2[0]

# Temporary swap logic
temp = str_1[0]
str_1 = str_2[0] + str_1[1:]  # Replace the first character of str_1 with the first character of str_2
str_2 = temp + str_2[1:]      # Replace the first character of str_2 with the original first character of str_1

# Output the modified strings
print(str_1, str_2)
