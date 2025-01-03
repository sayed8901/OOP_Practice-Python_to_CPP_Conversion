// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

/* 
Note:
* Don't use built-in-functions.
* try to solve it with bubble sort algorithm or Selection Sort. 
*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int temp;
    // Bubble sort logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                // Swap elements
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
