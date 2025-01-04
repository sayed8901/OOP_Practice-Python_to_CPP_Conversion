// Problem_3 Question: Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.

/* 
sample input            output
5                       2
1 5 4 10 2
 */


#include <bits/stdc++.h>
using namespace std;

int count_odd(int *ar, int size)
{
    int odd_counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (ar[i] % 2 != 0)
            odd_counter++;
    }

    return odd_counter;
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

    int odd_count = count_odd(ar, n);
    cout << odd_count << endl;

    return 0;
}
