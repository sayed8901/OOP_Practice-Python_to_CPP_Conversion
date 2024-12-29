# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

n = int(input())
results = []

for _ in range(n):
    s = input().strip()

    # Convert any uppercase letter to lowercase
    s = s.lower()

    # Check length and apply transformation
    if len(s) <= 10:
        results.append(s)
    else:
        first_letter = s[0]
        last_letter = s[-1]
        actual_length = len(s) - 2

        results.append(f"{first_letter}{actual_length}{last_letter}")

# Output all results at once
for result in results:
    print(result)
