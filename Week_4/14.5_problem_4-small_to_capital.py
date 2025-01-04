# Problem_4 Statement: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function.

""" 
sample input        output
a                   A
z                   Z
q                   Q 
"""

# creating a function to convert small to capital
def small_to_capital(s):
    # ord(s) converts from string to ascii integer
    # Then, chr(ord(s)) converts from that ascii integer again to string
    # So, chr(ord(s) - 32) is a way to convert a lowercase letter to its uppercase equivalent.
    capital = chr(ord(s) - 32)
    return capital

s = input()
capital_letter = small_to_capital(s)
print(capital_letter)
