# Problem_2 Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it. Note : The string will not have any spaces.

""" 
sample input        output
hello               5
"""


# Function to calculate the length of a string
def my_len(s):
    count = 0
    for char in s:
        count += 1
    return count

s = input()         # Input string
length = my_len(s)  # Calculate and print the length

print(length)
