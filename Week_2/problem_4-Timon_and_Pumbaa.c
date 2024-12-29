// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int difference = a - b;

    if (difference >= 0)
    {
        printf("%d", difference);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}