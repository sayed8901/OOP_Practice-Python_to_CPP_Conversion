// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    char c;
    scanf("%c", &c);
    
    if (c != 'z')
    {
        printf("%c\n", c + 1);
    }
    else
    {
        printf("%c\n", 'a');
    }
    
    return 0;
}