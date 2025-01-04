# Problem_3 Question: Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.

"""
sample input            output
5                       2
1 5 4 10 2
"""


# Function to count odd numbers in an array
def count_odd(ar):
    odd_counter = 0

    for num in ar:
        if num % 2 != 0:
            odd_counter += 1

    return odd_counter

# Input size and array elements
n = int(input())
ar = list(map(int, input().split()))

# Count and print odd numbers
odd_count = count_odd(ar)

print(odd_count)
