# Problem_3 Statement: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.

""" 
sample input        output
a                   97
A                   65
0                   48 
"""


# creating a function to get the ascii value of a character
def char_to_ascii(s):
    # converting from string to ascii integer
    ascii_value = ord(s)
    return ascii_value

s = input()  # Read the character input
ascii_value = char_to_ascii(s)
print(ascii_value)
