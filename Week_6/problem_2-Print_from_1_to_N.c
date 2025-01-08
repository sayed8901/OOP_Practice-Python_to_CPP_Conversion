// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void num_print_recur(int i, int n)
{
    if (i > n)
        return;
    printf("%d\n", i);

    num_print_recur(i + 1, n);
}

int main()
{
    int n, i = 1;
    scanf("%d", &n);
    
    num_print_recur(i, n);

    return 0;
}