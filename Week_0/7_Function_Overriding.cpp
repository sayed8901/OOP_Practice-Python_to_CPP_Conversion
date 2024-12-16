#include <bits/stdc++.h>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
    float height;
    float weight;

public:
    // Constructor
    Person(const string& name, int age, float height, float weight) {
        this->name = name;
        this->age = age;
        this->height = height;
        this->weight = weight;
    }

    // Virtual method eat
    // here virtual method is used to have the overriding facility later on the inherited objects
    virtual void eat() {
        cout << "mache vate bangali" << endl;
    }
};


// Derived class Cricketer inheriting from Person
class Cricketer : public Person {
private:
    string team;

public:
    // Constructor for Cricketer
    Cricketer(const string& name, int age, float height, float weight, const string& team)
        : Person(name, age, height, weight), team(team) {}

    // Overriding the eat method of the base class
    void eat() override {
        cout << "eating vegetables" << endl;
    }
};



int main()
{
    // Creating an object of Cricketer
    Cricketer sakib("Sakib Al Hasan", 36, 5.7, 62, "Bangladesh");

    // Calling the overridden eat method
    sakib.eat();
    

    return 0;
}


