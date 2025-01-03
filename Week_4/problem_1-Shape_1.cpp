// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t = n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= t; j++){
            cout << "*";
        }
        t--;
        cout << endl;
    }

    return 0;
}