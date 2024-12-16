#include <bits/stdc++.h>
using namespace std;

// Base class A
class A {
protected:
    string name;

public:
    A(const string& name) {
        this->name = name;
    }

    void display() {
        cout << name << endl;
    }
};


// inheriting from class A to class B
class B : public A {
public:
    // Constructor for class B
    // and also, passing the name to the base class constructor
    B(const string& name) : A(name) {
        // N.B: No need for this->name = name;
        // The base class constructor A(name) already assigns the value to `name`
    }
};


int main()
{
    // Creating an object of class B and passing a name
    B obj("Sayed");

    // Calling the display method
    obj.display();
        
    return 0;
}

