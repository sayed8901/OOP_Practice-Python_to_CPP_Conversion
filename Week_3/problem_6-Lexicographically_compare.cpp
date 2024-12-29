// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <iostream>
#include <cstring>  

using namespace std;

int main() {
    char a[21], b[21];
    cin >> a;
    cin >> b;

    // Compare the two strings lexicographically
    int compare = strcmp(a, b);

    // Output the lexicographically smaller string
    if (compare < 0) {
        cout << a;  // If a is smaller, print a
    } else if (compare > 0) {
        cout << b;  // If b is smaller, print b
    } else if (compare == 0) {
        cout << a;  // If both strings are equal, print a
    }

    return 0;
}
