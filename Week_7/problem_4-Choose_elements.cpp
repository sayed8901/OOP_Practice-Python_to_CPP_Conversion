// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    // Sorting the array in descending order
    sort(ar.begin(), ar.end(), greater<int>());

    long long int sum = 0;

    // Summing till k-th value using the descending sorted array
    for (int i = 0; i < k; i++) {
        if (ar[i] > 0) { // To handle negative values
            sum += ar[i];
        }
    }

    cout << sum << endl;

    return 0;
}
