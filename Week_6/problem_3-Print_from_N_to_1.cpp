// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <iostream>
using namespace std;

void num_reverse_print_recur(int n)
{
    if (n <= 0)
        return;
    cout << n << " ";
    num_reverse_print_recur(n - 1);
}

int main()
{
    int n;
    cin >> n;

    num_reverse_print_recur(n);

    return 0;
}
