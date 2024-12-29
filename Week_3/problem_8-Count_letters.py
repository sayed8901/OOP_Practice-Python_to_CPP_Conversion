# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

s = input()

v = [0] * 26  # Initialize a 26-sized list to store frequency of each letter

# using frequency array to count
for char in s:
    # Increment frequency of the character
    v[ord(char) - ord('a')] += 1  

    # The ord() function in Python is used to get the Unicode code point (integer value) of a given character.

    # ord(char) returns the Unicode code point of the character char.
    # ord('a') returns the Unicode code point of the letter 'a', which is 97.


for i in range(26):
    if v[i] != 0:
        # Print the character and its frequency
        print(f"{chr(i + ord('a'))} : {v[i]}")  
