// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

#include <iostream>
using namespace std;

long long int sum = 0;

void sum_fun_recursion(int ar[], int n, int i)
{
    if (i >= n)
        return;
    sum = sum + ar[i];

    sum_fun_recursion(ar, n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int i = 0;
    sum_fun_recursion(ar, n, i);

    cout << sum << endl;

    return 0;
}
