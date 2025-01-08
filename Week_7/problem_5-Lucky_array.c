// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int minimum_element = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < minimum_element)
            minimum_element = ar[i];
    }
    // printf("%d\n", minimum_element);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == minimum_element)
            count++;
    }
    // printf("%d\n", count);

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}
