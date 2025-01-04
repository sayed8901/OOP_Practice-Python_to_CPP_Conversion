// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int max_num(int ar[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
            max = ar[i];
    }
    return max;
}

int min_num(int ar[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
            min = ar[i];
    }
    return min;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int max = max_num(ar, n);
    int min = min_num(ar, n);
    printf("%d %d", min, max);

    return 0;
}
