// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100001];
    cin >> s;
    // cout << s << endl;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        }

        if (s[i] >= 'A' && s[i] <= 'Z') {
            // Convert uppercase to lowercase
            s[i] = s[i] + 32;  
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            // Convert lowercase to uppercase
            s[i] = s[i] - 32;  
        }
    }

    cout << s;

    return 0;
}
