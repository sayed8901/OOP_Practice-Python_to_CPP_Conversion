// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // printf("%d ", ar[i]);
    }

    // creating an array of m size to hold the count index
    int count[m];
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }

    // count[value] incremented if searched number matches
    for (int i = 0; i < n; i++)
    {
        int value = ar[i];
        count[value]++;
    }

    // printing the count results
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}

