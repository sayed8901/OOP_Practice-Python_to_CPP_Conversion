// Practice_1 Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

/* 
sample input        output
5                   5
-7                  7
 */


#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int my_abs(int n)
{
    int absolute;

    if (n < 0)
    {
        int new_absolute = n * (-1);
        absolute = new_absolute;
    }
    else
    {
        absolute = n;
    }

    return absolute;
}

int main()
{
    int n;
    scanf("%d", &n);

    int absolute_value = my_abs(n);
    printf("%d", absolute_value);

    return 0;
}
