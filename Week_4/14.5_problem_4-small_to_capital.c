// Problem_4 Statement: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function.

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

int small_to_capital(char s)
{
    int capital = s - 32;
    return capital;
}

int main()
{
    char s;
    scanf("%c", &s);

    char capital_letter = small_to_capital(s);
    printf("%c", capital_letter);

    return 0;
}