# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

n = int(input())
ar = list(map(int, input().split()))
search_num = int(input())

search_num_index = -1  # Default to -1 if not found

for j in range(n):
    if search_num == ar[j]:
        search_num_index = j
        break

print(search_num_index)
