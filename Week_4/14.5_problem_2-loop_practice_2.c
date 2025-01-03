// Problem_2 Question: Take a positive integer N as input and print the pattern shown in the sample input output.

/* 
sample input: 5

output:
*********
 *******
  *****
   ***
    *

 */


#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int s = 0;
    int t = (n * 2) - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= t; k++)
        {
            printf("*");
        }
        s++;
        t -= 2;
        printf("\n");
    }

    return 0;
}