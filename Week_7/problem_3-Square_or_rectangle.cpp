// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

#include <iostream>
using namespace std;

void square_or_rectangle_checker(int a, int b) {
    if (a == b) {
        cout << "Square" << endl;
    } else {
        cout << "Rectangle" << endl;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        square_or_rectangle_checker(a, b);
    }

    return 0;
}
