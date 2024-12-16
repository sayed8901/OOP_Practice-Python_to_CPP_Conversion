// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/divisible-by-5-or-not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0){
            cout << i << " " << "Yes" << endl;;
        }
        else{
            cout << i << " " << "No" << endl;
        }
    }
    
    return 0;
}