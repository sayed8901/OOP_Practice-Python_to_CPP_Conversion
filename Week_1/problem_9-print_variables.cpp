// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/variables-6-4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    long long B; // To store very large integers
    double C;
    char D;

    // Reading inputs
    cin >> A >> B >> C >> D;

    // Printing outputs
    cout << A << endl;
    cout << B << endl;
    cout << fixed << setprecision(2) << C << endl; // Floating value with 2 decimal points
    cout << D << endl;

    return 0;
}