// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            printf("*");
        }
        t--;
        printf("\n");
    }

    return 0;
}