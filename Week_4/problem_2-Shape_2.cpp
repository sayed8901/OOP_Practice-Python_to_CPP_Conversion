// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n - 1;  // Spaces before the first '*'
    int t = 1;      // Number of '*' to print on the first row

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= t; k++)
        {
            cout << "*";
        }
        s--;
        t += 2;
        cout << endl;
    }

    return 0;
}
