#include <bits/stdc++.h>
using namespace std;


// Base_1 class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor for Person
    Person(const string& name, int age) {
        this->name = name, 
        this->age = age;
    }

    // Method to display personal info
    void personalInfo() {
        cout << name << " - " << age << endl;
    }
};


// Base_2 class Company
class Company {
protected:
    string company_name;
    string company_location;

public:
    // Constructor for Company
    Company(const string& company_name, const string& company_location) {
        this->company_name = company_name;
        this->company_location = company_location;
    }

    // Method to display company info
    void companyInfo() {
        cout << company_name << " - " << company_location << endl;
    }
};


// Derived class Employee inheriting from both Person and Company
class Employee : public Person, public Company {
public:
    // Constructor for Employee that initializes both Person and Company
    Employee(const string& name, int age, const string& company_name, const string& company_location)
        : Person(name, age), Company(company_name, company_location) {}
};



int main()
{
    // Creating an Employee object
    Employee obj("Sayed", 24, "Google", "USA");

    // Calling methods from both base classes
    obj.companyInfo();    // Outputs company info
    obj.personalInfo();   // Outputs personal info
    

    return 0;
}



