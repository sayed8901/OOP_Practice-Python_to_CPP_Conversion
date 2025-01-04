// Problem_2 Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it. Note : The string will not have any spaces.

/* 
sample input        output
hello               5
 */


#include <bits/stdc++.h>
using namespace std;

int my_len(char *s, int sz)
{
    int count = 0;

    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        // printf("%c ", s[i]);
        count++;
    }

    return count;
}

int main()
{
    char s[100];
    cin >> s;

    int length = my_len(s, 100);
    
    cout << length;

    return 0;
}
