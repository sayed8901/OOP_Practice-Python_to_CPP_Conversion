// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    // Creating a vector of size m to hold the count index
    vector<int> count(m + 1, 0);

    // Increment count[value] if searched number matches
    for (int i = 0; i < n; i++) {
        int value = ar[i];
        count[value]++;
    }

    // Printing the count results
    for (int i = 1; i <= m; i++) {
        cout << count[i] << endl;
    }

    return 0;
}
