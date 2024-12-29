// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // printf("%d ", ar[i]);

        if (ar[i] > 0)
        {
            ar[i] = 1;
        }
        else if (ar[i] < 0)
        {
            ar[i] = 2;
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", ar[j]);
    }

    return 0;
}