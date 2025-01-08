// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <iostream>
using namespace std;

void even_num_fun(int ar[], int n, int i)
{
    if (n < i + 1)
        return;
    
    // Check if the index is even
    if (n % 2 != 0)
    {
        cout << ar[n - 1] << " ";
    }

    even_num_fun(ar, n - 1, i);
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
    even_num_fun(ar, n, i);

    return 0;
}
