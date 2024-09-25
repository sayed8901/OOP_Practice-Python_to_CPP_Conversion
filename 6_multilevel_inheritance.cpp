#include <bits/stdc++.h>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor for Person
    Person(const string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Method to display personal info
    void personalInfo() {
        cout << name << " - " << age << endl;
    }
};


// Derived class Employee inheriting from Person
class Employee : public Person {
protected:
    string employee_id;

public:
    // Constructor for Employee
    Employee(const string& name, int age, const string& employee_id)
        : Person(name, age) {
            // Initialize base class Person
            this->employee_id = employee_id;
        }

    // Method to display employee info
    void employeeInfo() {
        cout << "Employee ID: " << employee_id << endl;
    }
};


// Derived class Manager inheriting from Employee
class Manager : public Employee {
private:
    string department;

public:
    // Constructor for Manager
    Manager(const string& name, int age, const string& employee_id, const string& department)
        : Employee(name, age, employee_id) {
            // Initialize base class Employee
            this->department = department;
        }

    // Method to display manager info
    void managerInfo() {
        cout << "Manager of: " << department << endl;
    }
};



int main()
{
    // Creating an object of Manager class
    Manager obj("Sayed", 35, "E12345", "IT Department");

    // Calling methods from different levels of inheritance
    obj.personalInfo();   // From Person class
    obj.employeeInfo();   // From Employee class
    obj.managerInfo();    // From Manager class
    

    return 0;
}


