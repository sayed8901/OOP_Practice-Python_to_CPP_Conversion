// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
        printf("Both");
    else if (a % k == 0 && b % k != 0)
        printf("Memo");
    else if (a % k != 0 && b % k == 0)
        printf("Momo");
    else if (a % k != 0 && b % k != 0)
        printf("No One");

    return 0;
}
