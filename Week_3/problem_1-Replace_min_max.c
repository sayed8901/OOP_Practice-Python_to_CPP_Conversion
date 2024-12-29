// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    int min_index, max_index;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            min_index = i;
        }

        if (ar[i] > max)
        {
            max = ar[i];
            max_index = i;
        }
    }

    // printf("min: %d, min_index: %d\n", min, min_index);
    // printf("max: %d, max_index: %d\n", max, max_index);

    for (int i = 0; i < n; i++)
    {
        if (i == min_index)
            ar[i] = max;

        if (i == max_index)
            ar[i] = min;

        printf("%d ", ar[i]);
    }

    return 0;
}
