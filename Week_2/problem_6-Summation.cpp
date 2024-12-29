// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long sum = 0;

    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        // cout << ar[i] << " ";

        sum += ar[i];
    }

    // Convert sum to its absolute value if negative
    if (sum < 0)
    {
        sum = abs(sum);
    }

    cout << sum << endl;

    return 0;
}
