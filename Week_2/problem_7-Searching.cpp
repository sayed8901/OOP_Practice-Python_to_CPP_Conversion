// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, search_num;
    int search_num_index = -1; // Default to -1 if not found

    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cin >> search_num;

    for (int j = 0; j < n; j++)
    {
        if (search_num == ar[j])
        {
            search_num_index = j;
            break;
        }
    }

    cout << search_num_index << endl;

    return 0;
}
