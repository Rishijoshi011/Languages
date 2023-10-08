#include <iostream>
#include <string>

using namespace std;

class Account
{
protected:
    int acNo;
    string name;
    string typeOfAcc;
    float balance;

public:
    Account(int acNo, const string &name, const string &typeOfAcc, float balance)
        : acNo(acNo), name(name), typeOfAcc(typeOfAcc), balance(balance) {}

    void display()
    {
        cout << "Account No: " << acNo << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Account Type: " << typeOfAcc << endl;
        cout << "Balance: $" << balance << endl;
    }

    virtual void deposit(float amount)
    {
        balance += amount;
    }

    virtual void calculateInterest() = 0;

    virtual void withdraw(float amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
        }
    }
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(int acNo, const string &name, float balance)
        : Account(acNo, name, "Current", balance) {}

    void calculateInterest() 
    {
        cout << "No interest earned in Current Account." << endl;
    }
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int acNo, const string &name, float balance)
        : Account(acNo, name, "Savings", balance) {}

    void calculateInterest() 
    {
        float interestRate = 4.0;
        float interest = (balance * interestRate) / 100;
        balance += interest;
    }
};

int main()
{
    CurrentAccount ca(1001, "Joey Tribbani", 5000);
    SavingsAccount sa(2002, "Chandler Bing", 10000);

    ca.display();
    sa.display();

    ca.deposit(2000);
    sa.deposit(3000);

    ca.calculateInterest();
    sa.calculateInterest();

    ca.withdraw(1500);
    sa.withdraw(2000);

    cout << "\nUpdated Account Information:" << endl;
    ca.display();
    sa.display();

    return 0;
}
