# Practice_1 Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

"""
sample input        output
5                   5
-7                  7
"""


# Function to calculate absolute value
def my_abs(n):
    if n < 0:
        absolute = n * (-1)
    else:
        absolute = n
    return absolute


n = int(input())        # Input value

# Calculate and print the absolute value
absolute_value = my_abs(n)

print(absolute_value)
