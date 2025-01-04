// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int ar[] = {n1, n2, n3};

    // Sorting process
    for (int i = 0; i < 2; i++) 
    {
        for (int j = i + 1; j < 3; j++) 
        {
            if (ar[i] > ar[j]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // Print numbers in ascending order
    for (int i = 0; i < 3; i++) {
        cout << ar[i] << endl;
    }

    // Print the values in the sequence as they were read
    cout << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3;

    return 0;
}
