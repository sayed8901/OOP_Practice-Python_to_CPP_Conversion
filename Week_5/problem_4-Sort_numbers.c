// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    int ar[] = {n1, n2, n3};

    // sorting process
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // to print these numbers in ascending order
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }

    // to print the values in the sequence as they were read.
    printf("\n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d", n3);

    return 0;
}