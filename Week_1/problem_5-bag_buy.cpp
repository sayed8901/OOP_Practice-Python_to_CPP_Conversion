#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balance;
    cin >> balance;

    if (balance > 20000) {
        cout << "Gucci Bag" << endl;
        cout << "Gucci Belt" << endl;
    }
    else if (balance >= 10000) {
        cout << "Gucci Bag" << endl;
    }
    else if (balance >= 5000) {
        cout << "Levis Bag" << endl;
    }
    else {
        cout << "Something" << endl;
    }

    return 0;
}