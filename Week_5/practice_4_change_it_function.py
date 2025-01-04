# Problem-4 Question: Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.

""" 
sample input            output
5                       10 20 30 40 100
10 20 30 40 50
"""


# Function to change the last element of the array
def change_it(ar):
    ar[-1] = 100


# Input size and array elements
n = int(input())
ar = list(map(int, input().split()))

# Update the last element
change_it(ar)

# Print the updated array
for n in ar:
    print(n, end=" ")
