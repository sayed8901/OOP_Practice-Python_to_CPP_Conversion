// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    // to print the array in reversed order
    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d ", ar[j]);
    }

    return 0;
}