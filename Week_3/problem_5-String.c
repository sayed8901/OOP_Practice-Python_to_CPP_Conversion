// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[10];
    char str_2[10];

    scanf("%s\n", str_1);
    scanf("%s\n", str_2);

    // Output the lengths of both strings using strlen function
    printf("%d %d\n", strlen(str_1), strlen(str_2));

    // Concatenate and print the two strings
    printf("%s%s\n", str_1, str_2);

    char first_of_1 = str_1[0];
    char first_of_2 = str_2[0];
    // printf("%c %c", first_of_1, first_of_2);

    // Store the first character of str_1 in a temporary variable to use later
    char temp = str_1[0];

    // Loop to modify the first character of str_1 to the first character of str_2
    for (int i = 0; i < strlen(str_1); i++)
    {
        str_1[0] = str_2[0];
        // printf("%c ", str_1[i]);
    }

    // Loop to modify the first character of str_2 to the original first character of str_1
    for (int i = 0; i < strlen(str_2); i++)
    {
        str_2[0] = temp;
        // printf("%c ", str_2[i]);
    }

    // Output the modified strings
    printf("%s %s", str_1, str_2);

    return 0;
}