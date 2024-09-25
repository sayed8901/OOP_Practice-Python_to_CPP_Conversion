#include <bits/stdc++.h>
using namespace std;

// Calculator class
class Calculator {
public:
    // Method to sum two numbers
    int sum(int num1, int num2) {
        return num1 + num2;
    }

    // Methods overloading to sum three numbers
    int sum(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};


int main()
{
    // Creating a Calculator object
    Calculator cal;

    // Call with three arguments
    cout << cal.sum(1, 2, 3) << endl;

    // Call with two arguments
    cout << cal.sum(1, 2) << endl;
    

    return 0;
}
