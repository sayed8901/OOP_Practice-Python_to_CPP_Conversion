// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <stdio.h>

int main()
{
    int n, i, divisor;
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            divisor = n / i;
            printf("%d\n", divisor);
        }
    }

    return 0;
}