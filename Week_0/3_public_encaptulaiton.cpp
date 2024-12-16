#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int value = 5;  // private attribute

public:
    // We can use, setter method to modify the private member
    void setValue(int newValue) {
        value = newValue;
    }
    
    // Crating a method to display the private member value
    // it will allow to access the value publicly
    void display() {
        cout << value << endl;
    }
};


int main()
{
    A obj;

    // setting & modifying the private member using the setter method
    obj.setValue(10);
    
    // Attempting to directly modify the private member will cause an error in C++
    // However, we can access the private value by using display functions
    obj.display();
    
    return 0;
}
