//6.DESIGN A "BANK ACCOUNT" CLASS WITH BASIC CREDIT AND DEBIT OPERATIONS IN C++ USING OBJECT ORIENTED PROGRAMMING FEATURE:
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(string name, double initialBalance)
    {
        accountHolderName = name;
        if (initialBalance >= 0)
        {
            balance = initialBalance;
        }
        else
        {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }
    void credit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Successfully credited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid amount. Please enter a positive value." << endl;
        }
    }
    void debit(double amount)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Successfully debited: $" << amount << endl;
            }
            else
            {
                cout << "Insufficient balance. Current balance: $" << balance << endl;
            }
        }
        else
        {
            cout << "Invalid amount. Please enter a positive value." << endl;
        }
    }
    void displayAccountDetails() const
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account("Sahil", 2000.0);
    account.displayAccountDetails();
    account.credit(600.0); // Deposit $500
    account.debit(300.0);  // Withdraw $200
    account.debit(1600.0);
    account.displayAccountDetails();
    return 0;
}