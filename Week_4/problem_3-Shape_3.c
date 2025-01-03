// https://codeforces.com/group/MWSDmqGsZm/contest/219432/my

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int t = 1;

    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= t; k++)
        {
            printf("*");
        }

        if (i < n)
        {
            s--;
            t += 2;
        }
        else if (i > n)
        {
            s++;
            t -= 2;
        }
        printf("\n");
    }

    return 0;
}