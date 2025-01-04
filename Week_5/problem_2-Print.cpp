// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <bits/stdc++.h>
using namespace std;

void print_fun(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
            printf(" ");
    }
}

int main()
{
    int n;
    cin >> n;

    print_fun(n);

    return 0;
}
