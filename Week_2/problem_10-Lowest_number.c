// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <stdio.h>
#include <limits.h>

int main()
{
    int n, lowest_num = INT_MAX, lowest_num_index;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // printf("%d ", ar[i]);

        if (ar[i] < lowest_num)
        {
            lowest_num = ar[i];
            lowest_num_index = i + 1;
        }
    }

    printf("%d %d", lowest_num, lowest_num_index);

    return 0;
}