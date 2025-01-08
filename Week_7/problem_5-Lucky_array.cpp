// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int minimum_element = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (ar[i] < minimum_element)
            minimum_element = ar[i];
    }
    // cout << minimum_element << endl;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == minimum_element)
            count++;
    }
    // cout << count << endl;

    if (count % 2 != 0) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}
