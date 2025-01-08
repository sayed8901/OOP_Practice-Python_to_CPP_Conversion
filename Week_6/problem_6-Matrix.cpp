// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }

    int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += ar[i][j];
            }
            if (i + j == n - 1)
            {
                secondary_diagonal_sum += ar[i][j];
            }
        }
    }

    // cout << primary_diagonal_sum << " " << secondary_diagonal_sum << endl;

    cout << abs(primary_diagonal_sum - secondary_diagonal_sum) << endl;

    return 0;
}
