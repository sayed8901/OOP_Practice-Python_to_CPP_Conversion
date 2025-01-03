// Problem_1 Statement: Take a positive integer N as input and print the pattern shown in the sample input output.

/* 
sample input: 5

output:
    *
   **
  ***
 ****
*****

 */


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = n - 1;
    int t = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= t; k++)
        {
            cout << "*";
        }
        s--;
        t++;
        cout << endl;
    }

    return 0;
}
