// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    char s[n];
    cin >> s;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (s[i] - '0'); // Convert character digit to integer and add to sum
    }
    cout << sum;

    return 0;
}
