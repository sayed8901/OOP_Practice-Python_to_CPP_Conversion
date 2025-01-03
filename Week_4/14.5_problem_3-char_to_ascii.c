// Problem_3 Statement: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.

/* 
sample input        output
a                   97
A                   65
0                   48
 */


#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int char_to_ascii(char s)
{
    // printf("%d", s);
    // converting from string to ascii integer
    int ascii = s;
    return ascii;
}

int main()
{
    char s;
    scanf("%c", &s);

    int ascii_value = char_to_ascii(s);
    printf("%d", ascii_value);

    return 0;
}