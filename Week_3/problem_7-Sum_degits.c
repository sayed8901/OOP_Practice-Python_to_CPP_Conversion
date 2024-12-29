// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);
    // printf("%s", s);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (s[i] - '0');
    }
    printf("%d", sum);

    return 0;
}