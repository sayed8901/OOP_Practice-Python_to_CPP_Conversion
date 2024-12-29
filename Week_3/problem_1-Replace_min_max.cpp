// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int min = INT_MAX;
    int max = INT_MIN;

    int min_index, max_index;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            min_index = i;
        }

        if (ar[i] > max)
        {
            max = ar[i];
            max_index = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == min_index)
            ar[i] = max;

        if (i == max_index)
            ar[i] = min;

        cout << ar[i] << " ";
    }

    return 0;
}
