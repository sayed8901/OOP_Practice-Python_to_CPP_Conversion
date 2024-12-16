#include<bits/stdc++.h>
using namespace std;

class A{
public:
    // constructor
    A(){
        printf("I am Constructor\n");
    }

    // method
    void display(){
        cout<<"I am Display Method\n";
    }

    // destructor
    ~A(){
        cout<<"I am Destructor\n";
    }
};


int main(){
    A obj;
    obj.display();

    return 0;
}

