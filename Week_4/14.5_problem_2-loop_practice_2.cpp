// Problem_2 Question: Take a positive integer N as input and print the pattern shown in the sample input output.

/* 
sample input: 5

output:
*********
 *******
  *****
   ***
    *

 */


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0;
    int t = (n * 2) - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            cout << " ";
        }
        for (int k = 1; k <= t; k++) {
            cout << "*";
        }
        s++;
        t -= 2;
        cout << endl;
    }

    return 0;
}
