// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX
using namespace std;

int main()
{
    int n, lowest_num = INT_MAX, lowest_num_index;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        if (ar[i] < lowest_num)
        {
            lowest_num = ar[i];
            lowest_num_index = i + 1;  // 1-based index
        }
    }

    cout << lowest_num << " " << lowest_num_index << endl;

    return 0;
}
