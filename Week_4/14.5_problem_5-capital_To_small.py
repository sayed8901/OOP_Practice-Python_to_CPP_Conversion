# Problem_5 Question: Make a function named capital_to_small() which will take a capital alphabet as a parameter (which is a character) and it will convert that capital alphabet to small alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be capital alphabets and call that function to get the small alphabet and print that in the main function.

""" 
sample input        output
A                   a
Z                   z
Q                   q
"""


# creating a function to convert small to capital
def capital_to_small(s):
    # ord(s) converts from string to ascii integer
    # Then, chr(ord(s)) converts from that ascii integer again to string
    # So, chr(ord(s) + 32) is a way to convert a uppercase letter to its lowercase equivalent.
    small = chr(ord(s) + 32)
    return small

s = input()
small_letter = capital_to_small(s)
print(small_letter)
