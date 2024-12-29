// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(26, 0); // Initialize an 26-sized array to store frequency of each letter

    string s;
    cin >> s;

    // using frequency array to count
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 'a']++; // Increment frequency of the character
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
        {
            // Print the character and its frequency
            cout << char(i + 'a') << " : " << v[i] << endl;
        }
    }

    return 0;
}
