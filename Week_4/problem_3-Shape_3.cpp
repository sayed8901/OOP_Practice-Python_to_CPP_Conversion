// https://codeforces.com/group/MWSDmqGsZm/contest/219432/my

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n - 1; // Spaces before the first '*'
    int t = 1;     // Number of '*' to print on the first row

    for (int i = 1; i <= 2 * n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= t; k++)
        {
            cout << "*";
        }

        // Update spaces and stars based on current row
        if (i < n)
        {
            s--;
            t += 2;
        }
        else if (i > n)
        {
            s++;
            t -= 2;
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
