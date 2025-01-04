// Problem_4 Statement: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function.

/* 
sample input        output
a                   A
z                   Z
q                   Q  
*/


#include <iostream>
using namespace std;

char capital_to_small(char s) {
    char capital = s - 32;
    return capital;
}

int main() {
    char s;
    cin >> s;

    char capital_letter = capital_to_small(s);
    cout << capital_letter;

    return 0;
}
