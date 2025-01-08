def sum_fun_recursion(ar, n, i, total=0):
    if i >= n:
        return total
    return sum_fun_recursion(ar, n, i + 1, total + ar[i])


n = int(input())
ar = list(map(int, input().split()))
i = 0

total = sum_fun_recursion(ar, n, i)
print(total)
