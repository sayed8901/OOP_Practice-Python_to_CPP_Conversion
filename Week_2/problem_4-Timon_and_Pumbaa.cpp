// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int difference = a - b;

    if (difference >= 0)
    {
        cout << difference << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
