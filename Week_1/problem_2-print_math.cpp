#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;

    // Set precision only for division
    cout << fixed << setprecision(2); // Set precision to 2
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
} 