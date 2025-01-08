// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <iostream>
using namespace std;

void num_print_recur(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;

    num_print_recur(i + 1, n);
}

int main()
{
    int n, i = 1;
    cin >> n;

    num_print_recur(i, n);

    return 0;
}
