// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // to consume the newline after the integer input

    for (int i = 0; i < n; i++) {
        char s[101];
        cin >> s;

        // to make any alphabet to lowercase if it is provided in uppercase
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }

        int len = strlen(s);

        // actual length represents only the length excluding the first_letter & the last_letter of the given word
        int actual_length = len - 2;

        if (len <= 10) {
            cout << s << endl;
        } else {
            char first_letter = s[0];
            char last_letter = s[len - 1];
            
            cout << first_letter << actual_length << last_letter << endl;
        }
    }

    return 0;
}
