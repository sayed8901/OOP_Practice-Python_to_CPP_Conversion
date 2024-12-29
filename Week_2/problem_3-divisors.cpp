// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            int divisor = n / i;
            cout << divisor << endl;
        }
    }

    return 0;
}
