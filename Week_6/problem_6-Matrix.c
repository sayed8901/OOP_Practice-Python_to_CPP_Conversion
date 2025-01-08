// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int row = n, col = n;
    int ar[row][col];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += ar[i][j];
            }
            if (i + j == n - 1)
            {
                secondary_diagonal_sum += ar[i][j];
            }
        }
    }

    // printf("%d %d", primary_diagonal_sum, secondary_diagonal_sum);

    printf("%d", abs(primary_diagonal_sum - secondary_diagonal_sum));

    return 0;
}
