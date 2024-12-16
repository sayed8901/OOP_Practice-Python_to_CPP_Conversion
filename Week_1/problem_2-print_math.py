# Input two numbers
a, b = map(int, input().split())

# Perform operations
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")

# Set precision only for division
print(f"{a} / {b} = {a / b:.2f}")
