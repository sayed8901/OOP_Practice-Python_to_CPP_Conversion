// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

void print_fun(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
            printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    print_fun(n);

    return 0;
}