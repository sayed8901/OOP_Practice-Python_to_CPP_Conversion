// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

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

        if (ar[i] > 0)
        {
            ar[i] = 1;
        }
        else if (ar[i] < 0)
        {
            ar[i] = 2;
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << ar[j] << " ";
    }

    return 0;
}
