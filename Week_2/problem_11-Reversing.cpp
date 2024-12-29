// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // To print the array in reversed order
    for (int j = n - 1; j >= 0; j--)
    {
        cout << ar[j] << " ";
    }

    return 0;
}
