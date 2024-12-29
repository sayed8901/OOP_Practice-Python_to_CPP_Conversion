// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <stdio.h>
#include <string.h>

int main()
{
    int v[26] = {0};  // Initialize an 26-sized array to store frequency of each letter

    char s[100];
    scanf("%s", s);

    // using frequency array to count
    for (int i = 0; i < strlen(s); i++)
    {
        v[s[i] - 'a']++;  // Increment frequency of the character
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
        {
            // Print the character and its frequency
            printf("%c : %d\n", i + 'a', v[i]);
        }
    }

    return 0;
}
