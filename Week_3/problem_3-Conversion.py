# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

s = input()

# Replace commas with spaces and switch the case of letters
result = []
for char in s:
    if char == ',':
        result.append(' ')
    elif 'A' <= char <= 'Z':
        # Convert uppercase to lowercase
        result.append(char.lower())  
    elif 'a' <= char <= 'z':
        # Convert lowercase to uppercase
        result.append(char.upper())  
    else:
        result.append(char)

# Join the list of characters back into a string and print the result
print("".join(result))
