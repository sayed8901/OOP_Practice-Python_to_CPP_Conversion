// Problem_5 Question: Make a function named capital_to_small() which will take a capital alphabet as a parameter (which is a character) and it will convert that capital alphabet to small alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be capital alphabets and call that function to get the small alphabet and print that in the main function.

/* 
sample input        output
A                   a
Z                   z
Q                   q
*/


#include <iostream>
using namespace std;

char capital_to_small(char s) {
    char small = s + 32;
    return small;
}

int main() {
    char s;
    cin >> s;

    char small_letter = capital_to_small(s);
    cout << small_letter;

    return 0;
}
