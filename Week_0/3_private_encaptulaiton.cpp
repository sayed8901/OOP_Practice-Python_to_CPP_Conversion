#include <bits/stdc++.h>
using namespace std;

class Bank {
protected:
    // Protected attribute
    string _branch;

private:
    // Private attribute
    double __balance;

public:
    // Public attribute (for demonstration)
    string holder_name;

    // Constructor
    Bank(string holderName, double initialDeposit)
    {
        this->holder_name = holderName;
        _branch = "Panthapath";  // protected attribute
        this->__balance = initialDeposit;  // Assign the private balance
    }

    // Method to deposit money
    void deposit(double depositAmount) {
        __balance += depositAmount;
    }

    // Method to withdraw money
    double withdraw(double withdrawAmount) {
        if (withdrawAmount <= __balance) {
            __balance -= withdrawAmount;
            return withdrawAmount;
        } else {
            cout << "Not enough balance: " << withdrawAmount << endl;
            return 0.0;
        }
    }

    // Method to get the balance (public accessor)
    double get_balance() const {
        return __balance;
    }
};


int main()
{
    // Creating a Bank object
    Bank sayed("Sayed", 10000);

    // Depositing money
    sayed.deposit(5000);

    // Accessing public attribute
    cout << "Account holder: " << sayed.holder_name << endl;

    // Accessing private balance through the public method
    cout << "Balance: " << sayed.get_balance() << endl;

    return 0;
}

