// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        char s[101];

        scanf("%s\n", s);

        // to make any alphabet to lowercase if it is provided in uppercase
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }

        // actual length represents only the length excluding the first_letter & the last_letter of the given word
        int actual_length = strlen(s) - 2;

        int len = strlen(s);
        if (len <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            // printf("%d", strlen(s));
            char first_letter = s[0];
            char last_letter = s[strlen(s) - 1];

            printf("%c%d%c\n", first_letter, actual_length, last_letter);
        }
    }

    return 0;
}