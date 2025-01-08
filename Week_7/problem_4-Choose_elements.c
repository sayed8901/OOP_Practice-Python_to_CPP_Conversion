// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    // sorting the array in descending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] > ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    long long int sum = 0;

    // summing till k th value using that descending sorted array
    for (int i = 0; i < k; i++)
    {
        if (ar[i] > 0) // to handle the negative values
            sum = sum + ar[i];
    }

    printf("%lld\n", sum);

    return 0;
}