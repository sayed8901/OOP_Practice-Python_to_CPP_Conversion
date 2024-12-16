// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/divisible-by-5-or-not

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
    
    return 0;
}