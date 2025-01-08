// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void recursion_fun(int n)
{
    if (n <= 0)
        return;
    printf("I love Recursion\n");
    recursion_fun(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    recursion_fun(n);

    return 0;
}