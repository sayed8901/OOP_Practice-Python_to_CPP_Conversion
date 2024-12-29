// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str_1[10], str_2[10];

    cin >> str_1;
    cin >> str_2;

    // Output the lengths of both strings
    cout << strlen(str_1) << " " << strlen(str_2) << endl;

    // Output the concatenation of both strings
    cout << str_1 << str_2 << endl;

    char first_of_1 = str_1[0];
    char first_of_2 = str_2[0];

    // Temporary variable to hold the first character of str_1
    char temp = str_1[0];

    // Modify the first character of str_1 by replacing it with the first character of str_2
    for (int i = 0; i < strlen(str_1); i++) {
        str_1[0] = str_2[0];
    }

    // Modify the first character of str_2 by replacing it with the original first character of str_1
    for (int i = 0; i < strlen(str_2); i++) {
        str_2[0] = temp;
    }

    // Output the modified strings
    cout << str_1 << " " << str_2;

    return 0;
}
