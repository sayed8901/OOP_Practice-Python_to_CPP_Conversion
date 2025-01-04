// Problem-4 Question: Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.

/* 
sample input            output
5                       10 20 30 40 100
10 20 30 40 50
 */


#include <bits/stdc++.h>
using namespace std;

void change_it(int *ar, int sz)
{
    *(ar + (sz - 1)) = 100;
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

    change_it(ar, n);

    for (int i = 0; i < n; i++)
    {
         cout << ar[i] << " ";
    }

    return 0;
}