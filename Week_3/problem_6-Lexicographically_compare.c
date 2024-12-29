// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];
    scanf("%s\n", a);
    scanf("%s\n", b);
    // printf("%s\n%s\n", a, b);

    // Compare the two strings lexicographically
    int compare = strcmp(a, b);
    // printf("%d\n", compare);

    // Output the lexicographically smaller string
    if (compare < 0)
    {
        printf("%s", a);  // If a is smaller, print a
    }
    else if (compare > 0)
    {
        printf("%s", b);  // If b is smaller, print b
    }
    else if (compare == 0)
    {
        printf("%s", a);  // If both strings are equal, print a
    }

    return 0;
}