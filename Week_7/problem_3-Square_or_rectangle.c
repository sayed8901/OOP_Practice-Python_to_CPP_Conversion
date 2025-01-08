// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void square_or_rectangle_checker(int a, int b)
{
    if (a == b)
    {
        printf("Square\n");
    }
    else
    {
        printf("Rectangle\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        square_or_rectangle_checker(a, b);
    }

    return 0;
}
