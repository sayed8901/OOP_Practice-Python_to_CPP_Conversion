// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <iostream>
using namespace std;

void recursion_fun(int n)
{
    if (n <= 0)
        return;
    cout << "I love Recursion" << endl;
    recursion_fun(n - 1);
}

int main()
{
    int n;
    cin >> n;

    recursion_fun(n);

    return 0;
}
