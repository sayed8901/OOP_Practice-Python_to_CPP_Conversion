// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>

int main()
{
    int n, search_num;
    int seach_num_index = 0;

    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        // printf("%d\n", ar[i]);
    }

    scanf("%d", &search_num);
    // printf("%d\n", search_num);

    for (int j = 0; j < n; j++)
    {
        if (search_num == ar[j])
        {
            seach_num_index = j;
            break;
        }
        else
        {
            seach_num_index = -1;
        }
    }
    printf("%d", seach_num_index);

    return 0;
}