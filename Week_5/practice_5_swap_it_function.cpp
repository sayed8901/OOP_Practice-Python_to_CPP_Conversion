// Problem_5 Question: Write a function named swap_it() which will receive addresses of two integer variables. That means you need to receive them as integer pointers in the function parameter. In the function you need to swap the values of each other, you know that you can access the values of them by using dereferencing. You don’t need to return anything. After the function calls print the values of those two variables in the main function and see if anything happens!

/* 
sample input            output
10 20                   20 10
 */


#include <bits/stdc++.h>
using namespace std;

void swap_it(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    swap_it(&n1, &n2);

    cout << n1 << " " << n2;

    return 0;
}
