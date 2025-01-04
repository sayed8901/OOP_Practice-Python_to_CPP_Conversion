// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int sum(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int result = sum(n1, n2);
    printf("%d", result);

    return 0;
}