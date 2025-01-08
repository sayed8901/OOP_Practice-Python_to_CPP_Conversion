// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void num_reverse_print_recur(int n)
{
    if (n <= 0)
        return;
    printf("%d ", n);

    num_reverse_print_recur(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    num_reverse_print_recur(n);

    return 0;
}
