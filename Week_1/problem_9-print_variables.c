// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/variables-6-4

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int A;
    long long B; // To store very large integers
    float C;
    char D;

    // Reading inputs
    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf(" %c", &D); // Space before %c to handle newline characters

    // Printing outputs
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C); // Floating value with 2 decimal points
    printf("%c\n", D);
    
    return 0;
}