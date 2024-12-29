// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c != 'z')
    {
        // Increment and cast to char
        cout << static_cast<char>(c + 1) << endl;
    }
    else
    {
        cout << 'a' << endl;
    }
    
    return 0;
}