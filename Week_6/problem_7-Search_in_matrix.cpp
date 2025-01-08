// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    int ar[row][col];

    // Input 2D array elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> ar[i][j];
        }
    }

    int num_search;
    cin >> num_search;
    int flag = 0;

    // Searching for the number
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (num_search == ar[i][j]) {
                flag = 1;
                break;
            }
        }
    }

    // Printing "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".
    if (flag == 1) {
        cout << "will not take number";
    } else {
        cout << "will take number";
    }

    return 0;
}
