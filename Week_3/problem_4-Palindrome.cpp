// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int size = s.size();
    int flag = 0;
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        // cout << s1[i] << " " << s2[i] << endl;
        if (s[i] != s[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}