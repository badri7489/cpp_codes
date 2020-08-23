#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    // attributes
    string name;
    double balance;

public:
    // methods
    // inline methods

    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    return false;
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not OK" << endl;

    if (frank_account.withdraw(500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Paisa daal BC" << endl;

    if (frank_account.withdraw(1500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Paisa daal BC" << endl;

    cout << endl;
    return 0;
}