// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>

int main()
{
    int n;
    long long int sum = 0;

    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
        // printf("%d\n", ar[i]);

        sum = sum + ar[i];
    }

    if (sum < 0)
    {
        // to convert our sum to absolute sum
        sum = sum * -1;
    }
    printf("%lld", sum);

    return 0;
}
